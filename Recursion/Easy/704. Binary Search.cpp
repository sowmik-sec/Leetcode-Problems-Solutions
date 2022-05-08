class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = help(nums, target,0,n-1);
        return ans;
    }
    int help(vector<int>&a,int target,int l, int r) {
        int m = (l+r)/2;
        if(l>r) return -1;
        if(a[m]==target) return m;
        if(target>a[m]) return help(a,target,m+1,r);
        else return help(a,target,l,m-1);
    }
};