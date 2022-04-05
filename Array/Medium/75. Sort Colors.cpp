class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, o = 0, t = 0, n = nums.size();
        z = count(nums.begin(),nums.end(),0);
        o = count(nums.begin(),nums.end(),1);
        t = count(nums.begin(),nums.end(),2);
        for(int i=0;i<n;i++) {
            if(z) {
                nums[i] = 0;
                z--;
                continue;
            }
            if(o){
                nums[i] = 1;
                o--;
                continue;
            }
            if(t) {
                nums[i] = 2;
                t--;
                continue;
            }
        }
    }
};