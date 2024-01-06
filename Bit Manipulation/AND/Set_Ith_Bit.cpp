#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;

    int mask = 1;
    mask = mask << k;

    // 111000 i = 3  i = 2;
    // 001000          000100  
    // 001000 

    int ans = n | mask;

    cout<<ans<<endl;
}
