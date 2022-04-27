class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int target2 = target - nums[i] - nums[j];
                int l = j+1;
                int r = n-1;
                while(l<r) {
                    int cur = nums[l] + nums[r];
                    if(cur>target2) r--;
                    else if(cur<target2) l++;
                    else {
                        vector<int> temp = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(temp);
                        while(l<r and nums[l]==temp[2]) ++l;
                        while(l<r and nums[r]==temp[3]) --r;
                    }
                }
                while(j+1<n and nums[j]==nums[j+1]) ++j;
            }
            while(i+1<n and nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};