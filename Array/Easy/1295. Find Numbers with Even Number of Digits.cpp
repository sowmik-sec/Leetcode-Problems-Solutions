class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            int temp = log10(nums[i])+1;
            if(temp%2==0)++ans;
        }
        return ans;
    }
};