class Solution {
public:
    int thirdMax(vector<int> nums) {
    vector<int> a;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(find(a.begin(),a.end(),nums[i])==a.end()){
            a.push_back(nums[i]);
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
    if(a.size()>=3)return a[a.size()-3];
    else return a[a.size()-1];
}
};