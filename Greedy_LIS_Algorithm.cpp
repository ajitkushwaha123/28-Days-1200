#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,x;
        cin>>n>>x;

       
            vector<long long> v;

            for(long long i= n; i >=1 ; i--)
            {
                v.push_back(i);
            }

            if(n - 2 >= x || x == 0)
            {
                sort(v.end() - x - 1 , v.end());

            for(long long i=0 ; i<v.size() ; i++)
            {
                cout<<v[i]<<" ";
            }cout<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
    }
}
