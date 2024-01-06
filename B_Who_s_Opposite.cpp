#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)

    {
        int a,b,c;
        cin>>a>>b>>c;

        int ele = abs(a-b) - 1;

        int dis =abs( max(a,b) - c);
        int ans = dis + max(a,b);
        cout<<ans<<endl;
    }
}