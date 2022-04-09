class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        for(int i=0;i<=mx;i++) {
            int l = 0, r = nums.size()-1;
            int n = r+1;
            //int low = lower_bound(nums.begin(),nums.end(),i)-nums.begin();
            while(l<=r) {
                int mid = l + (r-l)/2;
                if(i>nums[mid]) l = mid + 1;
                else r = mid - 1;
            }
            if(i==n-l) return i;
        }
        return -1;
    }
};