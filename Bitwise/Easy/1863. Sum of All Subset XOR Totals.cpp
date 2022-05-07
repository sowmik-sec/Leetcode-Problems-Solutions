class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int x = 0;
        for(auto n:nums) {
            x|=n;
        }
        return x*pow(2,nums.size()-1);
    }
};