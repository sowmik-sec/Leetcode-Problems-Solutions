class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1 = 0, cnt2  = 0;
        for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--) {
            char s1 = tolower(s[i]);
            char s2 = tolower(s[j]);
            if(isVowel(s1))++cnt1;
            if(isVowel(s2))++cnt2;
        }
        if(cnt1==cnt2) return true;
        return false;
    }
    bool isVowel(char s){
        if(s=='a' or s=='e' or s=='i' or s=='o' or s=='u')return true;
        return false;
    }
};