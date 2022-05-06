class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> m;
        for(int i=0;i<allowed.size();i++) m[allowed[i]]++;
        int cnt = 0;
        for(int i=0;i<words.size();i++) {
            set<char> s(words[i].begin(),words[i].end());
            bool ahs = true;
            for(auto j:s) {
                if(!m[j]) {
                    ahs = false;
                    break;
                }
            }
            if(ahs) ++cnt;
        }
        return cnt;
    }
};