class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> e,o,ans;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2) o.push_back(nums[i]);
            else e.push_back(nums[i]);
        }
        
        for(int i=0,j=0,k=0;i<nums.size();i++) {
            if(i%2==0) ans.push_back(e[j++]);
            else ans.push_back(o[k++]);
        }
        return ans;
    }
};