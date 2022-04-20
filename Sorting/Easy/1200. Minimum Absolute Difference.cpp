class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++) {
            int temp = arr[i+1]-arr[i];
            if(temp<=mn) {
                if(temp == mn) {
                    ans.push_back({arr[i],arr[i+1]});
                }
                else {
                    mn = temp;
                    ans.clear();
                    ans.push_back({arr[i],arr[i+1]});
                }
            }
        }
        
        return ans;
    }
};