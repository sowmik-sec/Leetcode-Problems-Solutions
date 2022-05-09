class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        merge_sort(nums,0,nums.size());
        return nums[k-1];
    }
    void merge(vector<int> &a, int l, int m, int h) {
        vector<int> temp(h-l);
        int i = l, j = m, k = 0;
        while(i<m and j<h) {
            if(a[i]>a[j]) temp[k++] = a[i++];
            else temp[k++] = a[j++];
        }
        while(i<m) temp[k++] = a[i++];
        while(j<h) temp[k++] = a[j++];
        for(int it=0;it<temp.size();it++) a[l+it] = temp[it];
    }
    void merge_sort(vector<int> &a, int l, int h) {
        if(h-l==1) return;
        int m = l + (h-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m,h);
        merge(a,l,m,h);
    }
};