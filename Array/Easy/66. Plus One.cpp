class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;
        for(int i=digits.size()-1;i>=0;i--) {
            if(i==digits.size()-1) {
                if(carry+digits[i]+1>9) ans.push_back((carry+digits[i]+1)%10), carry = 1;
                else ans.push_back((carry+digits[i]+1)), carry = 0;
            }
            else if(i<digits.size()-1 and carry+digits[i]>9) ans.push_back((carry+digits[i])%10), carry = 1;
            else ans.push_back(carry+digits[i]), carry = 0;
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};