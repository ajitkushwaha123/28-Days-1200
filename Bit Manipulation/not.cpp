#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    //a = 6 , b = 2

    int ans = ~a; //Right shift

    // a = 6   binary => 00110
    // a<<2              00001 => 1

    cout<<ans<<endl;
}