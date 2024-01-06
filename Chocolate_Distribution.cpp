#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int min = 0;

        if(n % 2 == 0)
        {
            min = n/2;
        }
        else
        {
            min = n/2 + 1;
        }

        cout<<min<<" "<<n<<endl;
	}
	
	return 0;
}
