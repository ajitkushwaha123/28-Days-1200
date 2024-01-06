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

        vector<long long> v;
        for(long long i=0; i<n ;i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        vector<long long>p;

        p.push_back(v[0]);

        for(long long i = 1; i<v.size() ; i++)
        {
            p.push_back(v[i] + p[i-1]);
        }

        vector<long long> s;

        reverse(v.begin() , v.end());

        s.push_back(v[0]);

        for(long long i=1 ; i<v.size() ; i++)
        {
            s.push_back(v[i] + s[i-1]);
        }

        reverse(s.begin() , s.end());

        long long mini = p[0] + s[0];

        long long index = 0;

        for(long long i = 0; i<p.size() ; i++)
        {
            if(mini > (p[i] + s[i]))
            {
                mini = p[i] + s[i];
                index = i;
            }

        //    cout<<p[i] <<" "<< s[i]<<endl;
        }

        cout<<index + 1<<endl;

    }
}