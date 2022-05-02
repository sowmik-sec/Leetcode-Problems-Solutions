class Solution {
public:
    int hammingDistance(int x, int y) {
        string a = binary(x), b = binary(y);
        int i=0,j = 0;
        int cnt = 0;
        while(i<a.size() and j<b.size()) {
            if(a[i]!=b[j]){
                cnt++;
            }
            i++,j++;
        }
        if(a.size()>b.size()) {
            while(i<a.size()) {
                if(a[i++]=='1')cnt++;
            }
        }
        else if(a.size()<b.size()) {
            while(j<b.size()) {
                if(b[j++]=='1') cnt++;
            }
        }
        return cnt;
    }   
    string binary(int n){
        string s;
        while(n>0){
            s+=to_string(n%2);
            n/=2;
        }
        //reverse(s.begin(),s.end());
        return s;
    }
};