class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, h = letters.size()-1;
        while(l<=h) {
            int mid = l + (h-l)/2;
            if(target>=letters[mid]) l = mid + 1;
            else h = mid - 1;
        }
        //cout<<h<<endl;
        if(l==letters.size()) return letters[0];
        else return letters[l];
    }
};