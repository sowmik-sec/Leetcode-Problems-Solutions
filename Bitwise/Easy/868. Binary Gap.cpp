class Solution {
public:
    int binaryGap(int n) {
        string num = binary(n);
        int in=-1;
        int mx = 0;
        for(int i=0;i<num.size();i++) {
            if(num[i]=='1') {
                if(in==-1) in = i;
                else {
                    mx = max(mx,i-in);
                    in = i;
                }
            }
        }
        return mx;
    }
    string binary(int n) {
        string temp;
        while(n>0) {
            temp += to_string(n%2);
            n/=2;
        }
        return temp;
    }
};