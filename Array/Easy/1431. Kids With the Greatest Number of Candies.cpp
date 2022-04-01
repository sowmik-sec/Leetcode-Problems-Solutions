class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ahs(n);
        int mx = *max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++) {
            if(candies[i]+extraCandies>=mx) ahs[i] = true;
            else ahs[i] = false;
        }
        return ahs;
    }
};