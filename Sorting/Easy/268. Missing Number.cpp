class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()) {
            if(nums[i]==nums.size()) i++;
            else if(nums[i]!=i) swap(nums[i],nums[nums[i]]);
            else i++;
        }
        for(int i=0;i<nums.size();i++) {
            if(i!=nums[i]) return i;
        }
        return nums.size();
    }
};