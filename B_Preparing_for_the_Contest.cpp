#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v;

        for(int i=0 ; i< n-k ;i++)
        {
            v.push_back(n-k - i);
        }

        for(int i = 1; i<=k ; i++)
        {
            v.push_back(n-k + i);
        }

        for(int i=0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;


    }
}