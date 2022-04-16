class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string temp = strs[0];
        for(int i=1;i<strs.size();i++) {
            while(1) {
                int in = temp.size();
                string ss = strs[i].substr(0,in);
                if(temp==ss) {
                    temp = ss;
                    break;
                }
                else if(temp.size()) {
                    temp = temp.substr(0,in-1);
                }
                else break;
            }
        }
        return temp;
    }
};