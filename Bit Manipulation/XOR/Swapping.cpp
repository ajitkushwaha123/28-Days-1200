#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    a = a^b;   // => a = a^b;
    b = a^b;   // => b = a(=> a^b )^b = a; 
    a = a^b;   // => a = a^b( => a) = b;

    cout<<a<<" "<<b<<endl;
}