class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> check(n);
        int temp=0;
        if(n==1) return true;
        for(int i=0;i<n;i++) {
            if(!i) {
                check[i] = nums[i];
            }
            else if(i==1) {
                check[i] = check[i-1];
            }
            else {
                check[i] = check[i-1]-1;
                if(nums[i-1]>check[i]) check[i] = nums[i-1];
                if(check[i]<=0) return false;
            }
        }
        for(int i=0;i<n;i++) {
            if(!check[i]) return false;
        }
        return true;
    }
};