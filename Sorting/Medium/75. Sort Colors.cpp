class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, o = 0, t = 0, n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]==0)++z;
            else if(nums[i]==1)++o;
            else ++t;
        }
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