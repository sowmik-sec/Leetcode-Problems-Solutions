class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=n;i>=3;i--) {
            int a = nums[i-3], b = nums[i-2], c = nums[i-1];
            if(a+b>c and b+c>a and c+a>b) return a+b+c;
        }
        return 0;
    }
};