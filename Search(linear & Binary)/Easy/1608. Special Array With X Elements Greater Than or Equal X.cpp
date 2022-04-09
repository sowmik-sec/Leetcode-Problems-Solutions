class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        for(int i=0;i<=mx;i++) {
            int l = 0, r = nums.size()-1;
            int n = r+1;
            int low = lower_bound(nums.begin(),nums.end(),i)-nums.begin();
            if(i==n-low) return i;
        }
        return -1;
    }
};