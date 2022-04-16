class Solution { 
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0, j = n-1;
        bool ahs = false;
        while(i<j) {
            if(s[i]==s[j]) i++,j--;
            else {
                return (checkPalindrome(s,i+1,j) or checkPalindrome(s,i,j-1));
            }
        }
        return true;
    }
    bool checkPalindrome(string s, int i, int j)
    {
        while(i<j) {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
};