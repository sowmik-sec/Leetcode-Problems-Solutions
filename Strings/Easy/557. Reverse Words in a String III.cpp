class Solution {
public:
    string reverseWords(string s) {
        string t = "",st = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(t.begin(),t.end());
                st += t;
                t = "";
                st += " ";
            }
            else{
                t+=s[i];
            }
        }
        reverse(t.begin(),t.end());
        st += t;
        return st;
    }
};