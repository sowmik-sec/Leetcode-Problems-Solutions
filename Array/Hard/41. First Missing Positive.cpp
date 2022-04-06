class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int check[500005] = {0};
        int n = nums.size(), cnt = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]>0 && nums[i]<500002) check[nums[i]]++, cnt++;
        }
        int ans=-1;
        for(int i=1;i<=cnt;i++) {
            if(!check[i]) {
                ans = i;
                break;
            }
        }
        if(ans==-1) return cnt+1;
        return ans;
    }
};