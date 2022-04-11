class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(target==nums[mid]) return true;
            // left half
            if(nums[mid]>nums[l]) {
                if(target<nums[mid] and target>=nums[l]) r = mid;
                else l = mid + 1;
            }
            // Right half
            else if(nums[mid]<nums[l]) {
                if(target>nums[mid] and target<nums[l]) l = mid + 1;
                else r = mid;
            }
            else l++;
        }
        return false;
    }
};