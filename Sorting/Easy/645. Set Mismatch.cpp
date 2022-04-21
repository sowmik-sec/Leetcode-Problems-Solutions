class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        map<int,int> m;
        vector<int> ans;
        set<int> s(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            if(!m[nums[i]])m[nums[i]]++;
            else {
                ans.push_back(nums[i]);
                break;
            }
        }
        auto it = s.begin();
        for(int i=1;i<=n;i++) {
            if(i!=*it) {
                ans.push_back(i);
                break;
            }
            it++;
        }
        return ans;
    }
};