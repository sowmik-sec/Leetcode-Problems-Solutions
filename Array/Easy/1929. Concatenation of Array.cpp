class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n*2);
        for(int i=0,j=n;i<n;i++) {
            ans[i] = nums[i];
            ans[n+i] = nums[i];
        }
        return ans;
    }
};