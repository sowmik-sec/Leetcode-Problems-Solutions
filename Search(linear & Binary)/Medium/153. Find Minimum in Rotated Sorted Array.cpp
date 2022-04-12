class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        if(nums[nums.size()-1]>nums[0] or nums.size()==1) return nums[0];
        while(l<=r) {
            int mid = l + (r-l)/2;
            //cout<<mid<<endl;
            if(mid-1>=0 and mid+1<nums.size() and nums[mid]<nums[mid-1] and nums[mid]<nums[mid+1] or (mid-1>=0 and nums[mid]<nums[mid-1])) return nums[mid];
            if(mid+1<nums.size() and nums[mid]>nums[mid+1]) return nums[mid+1];
            if(nums[mid]>nums[0]) {
                l = mid + 1;
            }
            else if(nums[mid]<nums[0]) {
                r = mid - 1;
            }
        }
        return nums[0];
    }
};