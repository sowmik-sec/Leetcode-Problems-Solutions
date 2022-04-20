class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()) nums.push_back(i);
        }
        return nums;
    }
};