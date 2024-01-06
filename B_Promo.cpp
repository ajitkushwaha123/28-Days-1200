#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;

    vector<long long> ps;

    vector<long long> v;
    for(long long i= 0; i<n ; i++)
    {
        long long  ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());

    ps.push_back(v[0]);

    for(long long i =1; i<v.size() ; i++)
    {
        ps.push_back(v[i] + ps[i-1]);
    }

    for(int i=0; i<ps.size() ; i++)
    {
        cout<<ps[i]<<" ";
    }cout<<endl;

    while(q--)
    {
        long long b,a;
        cin>>b>>a;

     //   vector<int> ans;

        a = a-1;
        b = b-1;      

        if(a > 0)
        {
            cout<<ps[b] - ps[a-1]<<endl;
         //   cout<<ps[b] <<" "<<ps[a-1]<<endl;
        }
        else
        {
            cout<<(ps[b])<<endl;
        }

    }

}