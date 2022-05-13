#include <iostream>
using namespace std;
int func(int a, int b, int n) {
    if(n==0) return a;
    if(n==1) return b;
    if(n<0) return 0;
    return func(a,b,n-1) ^ func(a,b,n-2);
}

int main() {
	int t; cin>>t;
	while(t--) {
	    int a, b, n; cin>>a>>b>>n;
	    if(n%3==0) cout<<a<<endl;
	    else if(n%3==2) cout<<(a^b)<<endl;
	    else cout<<b<<endl;
	}
	return 0;
}
