class Solution {
public:
    long long findComplement(int num) {
        string bin = binary(num);
        string com = complement(bin);
        long long  n = mk_decimal(com);
        return n;
    }
    string binary(int n) {
        string s;
        while(n>0) {
            s+=to_string(n%2);
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string complement(string s) {
        string st;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1')st+='0';
            else st+='1';
        }
        return st;
    }
    long long mk_decimal(string s){
        long long  dec = 0;
        long long  base = 1;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]=='1') dec+=base;
            base *=2;
        }
        return dec;
    }
};