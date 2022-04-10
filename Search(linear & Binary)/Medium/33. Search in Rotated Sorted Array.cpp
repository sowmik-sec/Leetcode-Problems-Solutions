class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while(start<=end) {
            int mid = (start+end)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[0]) { 
                if(target > nums[mid]) start = mid+1;
                else {
                    if(target<nums[0]) start = mid+1;
                    else end = mid-1;
                }
            }
            else {
                if(target>=nums[0]) end = mid - 1;
                else {
                    if(target>nums[mid]) start = mid+1;
                    else end = mid-1;
                }
            }
        }
        return -1;
    }
};