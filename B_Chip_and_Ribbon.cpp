#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long> v;

        for(long long i= 0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }
        long long up = v[0] - 1;

        for(long long i =0; i<v.size() - 1 ; i++)
        {
            if(v[i] < v[i+1])
            {
                up += v[i+1] - v[i];
            }
        }

        cout<<up<<endl;

                                      
    }
}