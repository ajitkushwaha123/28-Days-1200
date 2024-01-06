#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<pair<long long ,long long>> p;

        vector<long long> q;
        vector<long long> v;

        for(long long i = 0; i<n ; i++)
        {
            long long a,b;
            cin>>a>>b;

            p.push_back(make_pair(b,a));
            v.push_back(b);
            q.push_back(-a);
        }

        sort(p.begin()  , p.end());

        sort(v.begin() , v.end());

        sort(q.begin() , q.end());

        long long count = 0;

        for(long long i = 0; i<p.size()  ; i++)
        {

            long long lb = upper_bound(v.begin() , v.end()  , p[i].first) - v.begin();
            long long up = upper_bound(v.begin() , v.end()  , p[i].first) - v.begin();

            for(long long j = max(lb , up) ; j<p.size() ; j++)
            {
                if(p[j].second < p[i].second)
                {
                    count++;
                }
            }
        }
 



        cout<<count <<endl;

    }
}
