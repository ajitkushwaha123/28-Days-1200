#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i; 
    cin>>n>>i;

    i = i-1;

    int mask = 1;
    mask = mask << i;

    if(n&mask)
    {
        cout<<"1"<<" "<<n<<" ";

        int ans = n^mask;
        cout<<ans<<endl;
    }
    else
    {
        cout<<"0"<<" ";
        int q = n;
        int ans = mask | n;

        cout<<ans<<" "<<q<<endl;
    }
