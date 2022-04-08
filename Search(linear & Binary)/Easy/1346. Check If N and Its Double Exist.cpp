class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            if(s.find(arr[i]*2)!=s.end()) return true;
            if(arr[i]%2==0 and s.find(arr[i]/2)!=s.end()) return true;
            s.insert(arr[i]);
        }
        return false;
    }
};