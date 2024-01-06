#include<bits/stdc++.h>

// 0001   => 1      => 1
// 0010   => 3      => N++
// 0011   => 0      => 0
// 0100   => 4      => N
// 0101   => 1
// 0110   => 7
// 0111   => 0
// 1000   => 8

using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans = -1;

    if(n%4 == 0)
    {
        ans = n;
    }
    else if(n%4 == 1)
    {
        ans = 1;
    }
    else if(n%4 == 2)
    {
        ans = n+1;
    }
    else
    {
        ans = 0;
    }

    cout<<ans<<endl;

}