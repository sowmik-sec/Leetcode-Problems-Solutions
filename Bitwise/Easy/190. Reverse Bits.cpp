class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num = n;
        string bin = binary(n);
        //reverse(bin.begin(),bin.end());
        cout<<bin<<endl;
        uint32_t dec = decimal(bin);
        return dec;
    }
    uint32_t decimal(string n) {
        uint32_t dec = 0;
        uint32_t power = 0;
        while(power<n.size()) {
            if(n[power]=='1') dec += pow(2,power);
            power++;
        }
        return dec;
    }
    string binary(uint32_t n) {
        string s;
        while(n>0) {
            s+=to_string(n%2);
            n/=2;
        }
        int size = 32-s.size();
        if(s.size()<32) {
            for(int i=0;i<size;i++) s+='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};