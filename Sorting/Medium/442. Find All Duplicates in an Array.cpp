class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int i = 0;
        while(i<nums.size()) {
            if(nums[i]!=nums[nums[i]-1]) {
                swap(nums[i],nums[nums[i]-1]);
            }
            else i++;
        }
        for(int j=0;j<nums.size();j++) {
            if(nums[j]!=j+1) ans.push_back(nums[j]);
        }
        return ans;
    }
};