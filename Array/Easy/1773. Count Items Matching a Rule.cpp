class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size();
        int cnt = 0,in;
        if(ruleKey=="type") {
            in = 0;
        }
        else if(ruleKey=="color") {
            in = 1;
        }
        if(ruleKey=="name") {
            in = 2;
        }
        for(int i=0;i<n;i++) {
            if(items[i][in]==ruleValue)++cnt;
        }
        return cnt;
        
    }
};