class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int s = target - nums[i];
            if(m.find(s) == m.end()){
                m[nums[i]] = i;
            }
            else{
                a.push_back(m[s]);
                a.push_back(i);
            }
        }
        //for(auto i:m)cout<<i.first<<endl;
        return a;
    }
};