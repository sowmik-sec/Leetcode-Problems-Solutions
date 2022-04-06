class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        if(nums.size()==1 and nums[0]==1) return true;
        int gg = 0;
        for(int i=0;i<nums.size();i++) {
            if(!i) gg = nums[i];
            else {
                gg = __gcd(gg,nums[i]);
                if(gg==1) return true;
            }
        }
        return false;
    }
};