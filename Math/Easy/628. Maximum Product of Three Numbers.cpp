class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int temp1 = nums[0]*nums[1]*nums[n-1];
        int temp2 = nums[n-3]*nums[n-2]*nums[n-1];
        if(temp1>temp2) return temp1;
        return temp2;
    }
};