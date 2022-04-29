class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num = n;
        int arm = 0;
        while(num>0) {
            arm += pow(num%10,3);
            num/=10;
        }
        if(arm==n) return "Yes";
        return "No";
    }
};
