class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(),nums1.end()),ans;
        for(auto i:st) {
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end())ans.insert(i);
        }
        vector<int> v(ans.begin(),ans.end());
        return v;
    }
};