class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a = nums;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            int l = lower_bound(nums.begin(),nums.end(),a[i]) - nums.begin();
            ans[i] = l;
        }
        return ans;
    }
};