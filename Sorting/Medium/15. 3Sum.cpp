class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()==0) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            int target = -nums[i];
            int l = i+1, r = nums.size()-1;
            while(l<r) {
                int sum = nums[l] + nums[r];
                if(sum>target) r--;
                else if(sum<target) l++;
                else {
                    vector<int> temp = {nums[i], nums[l], nums[r]};
                    ans.push_back(temp);
                    while(l<r and nums[l]==temp[1])l++;
                    while(l<r and nums[r]==temp[2]) r--;
                }
            }
            while(i+1<nums.size() and nums[i]==nums[i+1])i++;
        }
        
        return ans;
    }
};