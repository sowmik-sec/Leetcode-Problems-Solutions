class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();
        for(int i=0;i<n;i++) {
            if(command[i]>='A' and command[i]<='Z' or command[i]>='a' and command[i]<='z') ans+=command[i];
            else if(command[i]=='(' and command[i+1]==')') ans+='o';
        }
        return ans;
    }
};