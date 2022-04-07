class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int dif = target - numbers[i];
            if(mp.find(dif)!=mp.end()){
                ans.push_back(mp[dif]+1);
                ans.push_back(i+1);
            }
            else mp[dif] = i;
        }
        return ans;
    }
};