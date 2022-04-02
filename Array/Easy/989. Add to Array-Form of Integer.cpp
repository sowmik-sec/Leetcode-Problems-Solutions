class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> temp;
        while(k) {
            temp.push_back(k%10);
            k/=10;
        }
        reverse(temp.begin(),temp.end());
        int carry = 0;
        vector<int> ans;
        for(int i=num.size()-1,j = temp.size()-1; i>=0 and j>=0; i--,j--) {
            if(carry+temp[j]+num[i]>9) {
                ans.push_back((carry+temp[j]+num[i])%10);
                carry = 1;
            }
            else {
                ans.push_back(carry+temp[j]+num[i]);
                carry = 0;
            }
        }
        if(num.size()==temp.size() and carry) ans.push_back(1),carry = 0;
        if(num.size()>temp.size()) {
            for(int i = num.size()-temp.size()-1;i>=0;i--) {
                if(carry + num[i]>9) {
                    ans.push_back((carry+num[i])%10);
                    carry = 1;
                }
                else {
                    ans.push_back((carry+num[i]));
                    carry = 0;
                }
            }
        }
        if(num.size()<temp.size()) {
            for(int i = temp.size()-num.size()-1;i>=0;i--) {
                if(carry+temp[i]>9) {
                    ans.push_back((carry+temp[i])%10);
                    carry = 1;
                }
                else {
                    ans.push_back(carry+temp[i]);
                    carry = 0;
                }
            }
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};