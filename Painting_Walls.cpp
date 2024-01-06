#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    double a,b,n;
	    cin>>a>>b>>n;
	    
	    double temp = a*b;
	    n = n/2;
	    
	    double ans = n/temp;
	    
	    cout<<int(ans)<<endl;
	}
	
	return 0;
}
