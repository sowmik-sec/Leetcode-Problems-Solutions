class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(low<nums.size() and nums[low]==target) return low;
        else return -1;
    }
};