class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++) {
            if(help(i)) ans.push_back(i);
        }
        return ans;
    }
    bool help(int n) {
        int num = n;
        while(n>0) {
            if(n%10==0) return false;
            if(num%(n%10)!=0) return false;
            n/=10;
        }
        return true;
    }
};