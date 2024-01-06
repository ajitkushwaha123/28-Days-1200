#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int n , l,s;
        cin>>n>>l>>s;

        s = s/3;
        int ans = 0;

        if(l >= s)
        {
            ans = s;
            l = l-s;
        }
        else
        {
            ans = l;
            l = 0;
        }

        ans += l/2;

        if(ans >= n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
	}
	
	return 0;
}
