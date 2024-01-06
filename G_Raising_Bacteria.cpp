#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int mask = 1;

    int bits = (log2(n)) + 1;
    //cout<<bits<<endl;
    int count = 0;

    while(bits > 0)
    {
        if(n&mask)
        {
            count++;
        }

        mask = mask << 1;
        bits--;
    }

    cout<<count<<endl;

}