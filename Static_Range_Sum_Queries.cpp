#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;

    vector<long long> v;

    for(long long i= 0; i<n ; i++)
    {
        long long ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<long long> ps;

    ps.push_back(v[0]);

    for(long long i=1; i<n ;i++)
    {
        ps.push_back(v[i] + ps[i-1]);
    }

    // for(int i=0; i<ps.size(); i++)
    // {
    //     cout<<ps[i]<<" ";
    // }

    while(q--)
    {
        long long l , r;
        cin>>l>>r;

        l = l-1;
        r = r-1;

        if(l > 0)
        {
            cout<<ps[r] - ps[l-1]<<endl;
        }
        else
        {
            cout<<ps[r]<<endl;
        }
    }
}