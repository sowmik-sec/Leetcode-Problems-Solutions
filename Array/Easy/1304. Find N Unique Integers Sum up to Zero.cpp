class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2) {
            if(n==0){
                ans.push_back(0);
                return ans;
            }
            for(int i=1;i<n;i++) ans.push_back(i);
            ans.push_back(-((n*(n-1))/2));
        }
        else {
            for(int i = 1; i<=n/2;i++) {
                ans.push_back(i);
                ans.push_back(-i);
            }
        }
        return ans;
    }
};