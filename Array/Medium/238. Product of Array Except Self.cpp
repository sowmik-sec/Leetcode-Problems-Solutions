class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n), postfix(n),ans(n);
        int mul = 1;
        for(int i=0;i<n;i++) {
            mul*=nums[i];
            prefix[i] = mul;
        }
        mul = 1;
        for(int i=n-1;i>=0;i--) {
            mul*=nums[i];
            postfix[i] = mul;
        }
        for(int i=0;i<n;i++) {
            if(!i)ans[i] = postfix[1];
            else if(i==n-1) ans[i] = prefix[i-1];
            else ans[i] = prefix[i-1]*postfix[i+1];
        }
        return ans;
    }
};