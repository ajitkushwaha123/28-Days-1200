#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {

        long long  n;
        cin>>n;

        vector<long long> v;

        for(long long i=0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        long long score = 0;
        long long one = 0;
        long long zero =  0;

        for(long long i=0; i<v.size() ; i++)
        {
            if(v[i] == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        score = min(zero  , one);
        cout<<score<<endl;

    }
}