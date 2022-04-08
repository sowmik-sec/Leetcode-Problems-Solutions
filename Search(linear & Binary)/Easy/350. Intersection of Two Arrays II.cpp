class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1,m2;
        set<int> s;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
            s.insert(nums2[i]);
        }
        for(auto i:s){
            for(int j=0;j<min(m1[i],m2[i]);j++){
                v.push_back(i);
            }
        }
        return v;
    }
};