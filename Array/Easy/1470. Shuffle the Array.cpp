class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i=0,j=n,k=0,l=0;i<2*n;i++) {
            if(i%2==0) {
                ans[k++] = nums[l++];
            }
            else ans[k++] = nums[j++];
        }
        return ans;
    }
};