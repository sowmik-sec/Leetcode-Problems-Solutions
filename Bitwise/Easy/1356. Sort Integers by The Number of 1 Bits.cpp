class Solution {
public:
struct bin{
    int num;
    int binary;
};
static bool gre(struct bin a,struct bin b) {return a.binary<b.binary;}
static bool com(struct bin a,struct bin b) {return a.num<b.num;}
int binaary(int n){
    int s = 0;
    while(n>0) {
        if(n%2) s++;
        n/=2;
    }
    return s;
}
vector<int> sortByBits(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n);
    struct bin aa[n];
    //sort(arr.begin(),arr.end(),);
    for(int i=0;i<n;i++) {
        aa[i].num = arr[i];
        aa[i].binary = binaary(arr[i]);
    }
    sort(aa,aa+n,com);
    //sort(aa,aa+n,gre);
    for(int i=1;i<n;i++) {
        for(int j=0;j<(n-i);j++) {
            if(aa[j].binary>aa[j+1].binary) swap(aa[j],aa[j+1]);
        }
    }
    for(int i=0;i<n;i++) ans[i] = aa[i].num;
    return ans;
}
    
   
};