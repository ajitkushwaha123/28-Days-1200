
// 111000
// 001000
// 001000
// i = 3

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int mask = 1;
    mask = mask << k;

    if(n&mask)
    {
        cout<<"1"<<endl;
    }

    else
    {
        cout<<"0"<<endl;
    }
}
