class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1;
        int carry = 0;
        string ans;
        while(i>=0 and j>=0) {
            int temp = (a[i]-'0')+(b[j]-'0')+carry;
            if(temp==2) {
                ans+='0';
                carry = 1;
            }
            else if(temp==3) ans+=to_string(1),carry = 1;
            else if(temp==0) ans+=to_string(0),carry = 0;
            else if(temp==1) ans+=to_string(1),carry = 0;
            i--,j--;
        }
        while(i>=0) {
            int temp = a[i]-'0'+carry;
            if(temp==2) {
                ans+='0';
                carry = 1;
            }
            else if(temp==3) ans+=to_string(1),carry = 1;
            else if(temp==0) ans+=to_string(0),carry = 0;
            else if(temp==1) ans+=to_string(1),carry = 0;
            i--;
        }
        while(j>=0) {
            int temp = b[j]-'0'+carry;
            if(temp==2) {
                ans+='0';
                carry = 1;
            }
            else if(temp==3) ans+=to_string(1),carry = 1;
            else if(temp==0) ans+=to_string(0),carry = 0;
            else if(temp==1) ans+=to_string(1),carry = 0;
            j--;
        }
        if(carry) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};