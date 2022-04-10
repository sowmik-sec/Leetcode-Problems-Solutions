class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        if(r==0) return nums[0];
        while(l<r) {
            int mid = l + (r-l)/2;
            if(mid+1<nums.size() and mid-1>=0 and nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]) {
                l = mid;
                break;
            }
            if(mid%2==0 and mid+1<nums.size() and nums[mid]!=nums[mid+1]) r = mid - 1;
            else if(mid%2 and mid>=0 and nums[mid]!=nums[mid-1])  r = mid - 1;
            else l = mid + 1;
        }
        //cout<<l<<" "<<r<<endl;
        return nums[l];
    }
};