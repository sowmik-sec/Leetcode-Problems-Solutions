class Solution {
public:
    struct arrange{
        int index;
        string s;
    };
    string sortSentence(string s) {
        int n = s.size();
        vector<string> arr(n);
        string st = "";
        int cnt =  0;
        for(int i=0;i<n;i++) {
            if(s[i]>='1' and s[i]<='9') {
                int temp = s[i]-'1';
                arr[temp] = st;
                st.clear();
                cnt++;
            }
            else if(s[i]>='A' and s[i]<='Z' or (s[i]>='a' and s[i]<='z')){
                st += s[i];
            }
        }
        string ans = "";
        for(int i=0;i<cnt-1;i++){
            ans+=arr[i];
            ans+=" ";
        }
        ans+=arr[cnt-1];
        return ans;
    }
};