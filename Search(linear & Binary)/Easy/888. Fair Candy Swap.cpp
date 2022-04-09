class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1=0, sum2=0;
        for(int i=0;i<aliceSizes.size();i++) sum1+=aliceSizes[i];
        for(int i=0;i<bobSizes.size();i++) sum2+=bobSizes[i];
        vector<int> ans;
        for(int num1:aliceSizes) {
            for(int num2:bobSizes) {
                int temp1 = sum1-num1;
                int temp2 = sum2-num2;
                temp1+=num2;
                temp2+=num1;
                if(temp1==temp2) {
                    ans.push_back(num1);
                    ans.push_back(num2);
                    break;
                }
            }
            if(ans.size()==2) break;
        }
        return ans;
    }
};