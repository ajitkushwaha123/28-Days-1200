#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        vector<long long> v;

        long long product = 1;

        for(long long i=0; i<n ; i++)
        {
            long long  ele;
            cin>>ele;

            v.push_back(ele);
            product *= ele;
        }

        vector<long long> ans;


        if(2023%product == 0)
        {
            cout<<"YES"<<endl;

            cout<<2023/product<<" ";

            for(int i=0; i<k-1;  i++)
            {
                cout<<"1"<<" ";
            }cout<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }


    }
}