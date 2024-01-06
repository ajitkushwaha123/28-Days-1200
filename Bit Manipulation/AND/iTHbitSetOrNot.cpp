#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int mask = 1;
    mask = mask << k; // Corrected line

    if(n & mask)
    {
        cout<<"SET BIT"<<endl;
    }
    else
    {
        cout<<"Not a set Bit"<<endl;
    }

    return 0;
}
