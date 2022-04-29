class Solution {
public:
    string convertToTitle(int columnNumber) {
        map<int,char> m;
        char c = 'A';
        for(int i=1;i<=26;i++) m[i] = c++;
        
        list<char> ch;
        while(columnNumber>0) {
            int temp = (columnNumber-1)%26;
            ch.push_front(m[temp+1]);
            columnNumber = (columnNumber-1)/26;
        }
        string ans(ch.begin(),ch.end());
        return ans;
    }
};