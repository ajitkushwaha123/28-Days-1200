#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int ans = a|b;

    // a = 6   binary => 00110
    // b = 28  binary => 11100

    //a|b =>  11110 => 30

    cout<<ans<<endl;
}