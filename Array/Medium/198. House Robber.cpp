class Solution {
public:
    int rob(vector<int>& nums) {
        int mx = 0, n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int> v(n);
        v[0] = nums[0];
        v[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;i++) {
            v[i] = max(v[i-2]+nums[i],v[i-1]);
        }
        return v[n-1];
    }
};