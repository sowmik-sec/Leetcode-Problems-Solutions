class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans(n);
        vector<bool> vis(n);
        for(int i=0;i<n;i++) {
            if(!vis[index[i]]) ans[index[i]] = nums[i],vis[index[i]] = true;
            else {
                for(int j=n-1;j>=index[i];j--) {
                    if(j-1>=0) ans[j] = ans[j-1];
                }
                ans[index[i]] = nums[i];
                vis[i] = true;
            }
        }
        return ans;
    }
};