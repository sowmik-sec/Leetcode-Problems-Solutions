class Solution {
public:
    int count_digit(int n)
    {
        int cnt = 0;
        while(n) {
            cnt++;
            n/=10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(count_digit(nums[i])%2==0)++ans;
        }
        return ans;
    }
};