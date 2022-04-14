class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        set<int> s(word.begin(),word.end());
        int cnt = 0;
        //cout<<patterns.size()<<endl<<endl;
        for(int i=0;i<patterns.size();i++) {
            if(word.find(patterns[i])!=string::npos) {
                ++cnt;
            }
        }
        return cnt;
    }
};