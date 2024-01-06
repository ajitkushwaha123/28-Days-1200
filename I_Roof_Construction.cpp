#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int bits = (log2(n)) + 1;

      //  cout<<bits<<endl;

        vector<int> v;

        int mask = 1;

        while(bits > 1)
        {
            mask = mask << 1;
            bits--;
         // cout<<mask<<endl;
        }

      //  n&mask != 0

///        cout<<mask<<endl;

        if(mask == n)
        {
            mask /= 2;
        }

      //  cout<<mask<<endl;

        for(int  i = n-1 ; i>= mask ; i--)
        {
            v.push_back(i);
        }

        v.push_back(0);

        for(int i= 1 ; i<mask  ; i++)
        {
            v.push_back(i);
        }

        for(int i= 0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}