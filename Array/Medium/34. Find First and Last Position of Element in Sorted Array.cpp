class Solution {
public:
    int lower(vector<int> a, int target)
{
    int s = 0, e = a.size()-1;
    while(s<=e) {
        int m = (s+e)/2;
        if(target>a[m]) s = m + 1;
        else e = m - 1;
    }
    return s;
}
int up(vector<int> a, int target)
{
    int s = 0, e = a.size()-1;
    while(s<=e) {
        int m = (s+e)/2;
        if(target>=a[m]) s = m + 1;
        else e = m - 1;
    }
    return e;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans = {-1,-1};
    if(!nums.size()) return ans;
    int low = lower(nums,target);
    if(low>=nums.size()) return ans;
    if(low == -1 or nums[low]!=target or low>=nums.size()) return ans;
    ans[0] = low;
    ans[1] = up(nums,target);
    return ans;
}
};