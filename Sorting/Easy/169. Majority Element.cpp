class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int major = nums[0];
        for(int i = 1; i < nums.size();i++) {
            if(cnt==0) {
                major = nums[i];
                cnt = 1;
            }
            else if(major == nums[i]) cnt++;
            else cnt--;
        }
        return major;
    }
};