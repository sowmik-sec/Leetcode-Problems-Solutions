class Solution {
public:
    bool hasAlternatingBits(int n) {
        string num = binary(n);
        for(int i=1;i<num.size();i++) {
            if(num[i]==num[i-1]) return false;
        }
        return true;
    }
    string binary(int n) {
        string temp;
        while(n>0) {
            temp += n%2;
            n/=2;
        }
        return temp;
    }
};