#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    double n,k;
	    cin>>n>>k;
	    
	    double ans = n / (1+k);
	    
	   double remain = ans - int(ans);
     //  cout<<remain<<endl;
	//    cout<<remain<<endl;
	    
	    remain = remain * (k+1);
	    
	    cout<<int(ans+remain)<<endl;
	}
	
	return 0;
}
