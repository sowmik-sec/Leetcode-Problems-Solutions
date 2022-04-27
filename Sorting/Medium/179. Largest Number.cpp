class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                string temp1, temp2;
                temp1 = to_string(nums[i])+to_string(nums[j]);
                temp2 = to_string(nums[j])+to_string(nums[i]);
                if(temp2>temp1) swap(nums[i],nums[j]);
            }
        }
        for(int i=0;i<nums.size();i++) {
            ans+=to_string(nums[i]);
        }
        if(ans[0]=='0') return "0";
        return ans;
    }
};