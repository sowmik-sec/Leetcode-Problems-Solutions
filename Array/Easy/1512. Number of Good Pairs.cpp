class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            m[nums[i]]++;
        }
        long long ans = 0;
        for(auto [x,y]:m) {
            ans += (y*(y-1))/2;
        }
        return ans;
    }
};