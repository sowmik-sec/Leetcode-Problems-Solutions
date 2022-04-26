class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()) {
            if(nums[i]<nums.size() and nums[i]!=nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for(int j=0;j<nums.size();j++) {
            if(j+1!=nums[j]) return nums[j];
        }
        
        return nums.size();
    }
};