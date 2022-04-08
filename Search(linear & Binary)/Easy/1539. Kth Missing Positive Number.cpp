class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> v(1111),a;
        
        for(int i=0;i<n;i++) v[arr[i]]++;
        for(int i = 1;i<arr[n-1]+1;i++)
            if(!v[i])
                a.push_back(i);
        if(k>a.size()) return arr[n-1]+ (k-a.size());
        return a[k-1];
    }
};