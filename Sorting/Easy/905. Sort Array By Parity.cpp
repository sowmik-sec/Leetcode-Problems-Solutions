class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        while(1){
            if(j==n)break;
            if((nums[i]%2 and nums[j]%2==0)){
                swap(nums[i],nums[j]);
                i++;j++;
            }
            else if(nums[i]%2==0){
                i++;j++;
            }
            else{
                j++;
            }
        }
        return nums;
    }
};