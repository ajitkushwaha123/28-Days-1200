#include<bits/stdc++.h>
using namespace std;

// 0001 => 1
// 0010 => 3
// 0011 => 0
// 0100 => 4


int xorOperation(int n)
{
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

    return ans;
}

int main()
{
    int l,r;
    cin>>l>>r;

    int result = xorOperation(r) ^ xorOperation(l-1);
    
    cout<<result<<endl;
}