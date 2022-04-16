class Solution {
public:
    bool isValid(string s) {
        stack<char> st1,st2,st3;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[') st1.push(s[i]);
            else{
                if(s[i]==')' and !st1.empty()){
                    if(st1.top()=='(') st1.pop();
                    else return false;
                }
                else if(s[i]=='}' and !st1.empty()){
                    if(st1.top()=='{') st1.pop();
                    else return false;
                }
                else if(s[i]==']' and !st1.empty()){
                    if(st1.top()=='[') st1.pop();
                    else return false;
                }
                else return false;
            }
        }
        if(st1.empty()) return true;
        else return false;
    }
};