class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        map<char,int> m;
        char c = 'a';
        for(int i=1;i<=26;i++) m[i] = c++;
        string st = "", ans = "";
        for(int i=n-1;i>=0;) {
            if(s[i]=='#') {
                string ss = "";
                ss += s[i-2];
                ss += s[i-1];
                ans += m[mk_dec(ss)];
                i-=3;
            }
            else ans += m[s[i--]-'0'];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int mk_dec(string s){
        int ans = 0;
        cout<<s<<endl;
        for(int i=0;i<2;i++) {
            ans = ans*10 + s[i]-'0';
        }
        cout<<ans<<endl;
        return ans;
    }
};