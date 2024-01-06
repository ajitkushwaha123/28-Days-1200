#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n , k;
        cin>>n>>k;

        vector<long long> v;
        vector<long long> q;

        for(long long i=0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        for(long long i = 0; i<k ; i++)
        {
            long long ele;
            cin>>ele;

            q.push_back(ele);
        }

      //  sort(q.begin() , q.end());
        vector<long long> ans;

        set<int>s;

        for(long long i=0; i<q.size(); i++)
        {

       if(s.count(q[i]))
       {
        continue;
       }

        s.insert(q[i]);
            
            for(long long j=0 ; j<v.size(); j++)
            {
                long long mask = 1;
                mask = mask << q[i];

                if(v[j] % mask == 0)
                {
                    mask = mask >> 1;
                    v[j] += mask;
                }
            }
        }

        // for(auto i : s)
        // {
        //     cout<<i<<" ";
        // }cout<<endl;


        for(long long i=0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;

        // for(int i=0; i<q.size() ; i++)
        // {
        //     for(int j=0; j<v.size() ; j++)
        //     {
        //         if(v[j] % )
        //     }
        // }
    }
}