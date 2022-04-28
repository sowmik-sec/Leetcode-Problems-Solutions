class Solution {
public:
    struct inter{
        int f,s;
    };
    static bool com(inter a, inter b) {return a.f<b.f;}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        inter arr[n];
        for(int i=0;i<n;i++) {
            arr[i].f = intervals[i][0];
            arr[i].s = intervals[i][1];
        }
        sort(arr,arr+n,com);
        vector<vector<int>> ans;
        if(n==1) return intervals;
        vector<int> temp = {arr[0].f,arr[0].s};
        bool ahs = false;
        for(int i=1;i<n;i++) {
            if(arr[i].f>=temp[0] and arr[i].f<=temp[1]){
                temp[0] = min(temp[0],arr[i].f);
                temp[1] = max(temp[1],arr[i].s);
            }
            else {
                ans.push_back(temp);
                temp[0] = arr[i].f;
                temp[1] = arr[i].s;
                ahs = false;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};