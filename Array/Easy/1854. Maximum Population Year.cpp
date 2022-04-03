class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        int ans = 0,mx=0;
        map<int,int> m;
        for(int i=0;i<n;i++) {
            m[logs[i][0]]++;
            m[logs[i][1]]--;
        }
        int count = 0;
        for(auto [x,y]:m) {
            count+=y;
            if(count>mx) {
                mx = count;
                ans = x;
            }
        }
        return ans;
    }
};