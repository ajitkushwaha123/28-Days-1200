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

        long long count = 0 , pos = 0 , neg = 0;

        long long negIndex = -1;

        for(long long i=  0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            if(ele == 0)
            {
                count++;
            }

            if(ele < 0)
            {
                neg++;
            }

            if(ele > 0)
            {
                pos++;
            }

            v.push_back(ele);
        }

        for(long long i=0; i<v.size() ; i++)
        {
            if(v[i] < 0)
            {
                negIndex = i;
            }
        }

        // sort(v.begin() , v.end());

        if(count > 0)
        {
            cout<<"0"<<endl;
        }
        else if(pos == n)
        {
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
        else if(neg == n)
        {
            if(neg % 2 != 0)
            {
                cout<<"0"<<endl;
            }
            else 
            {
                cout<<"1"<<endl;
                cout<<"1"<<" "<<"0"<<endl;
            }
        }
        else{
            if(neg % 2 != 0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
                cout<<negIndex<<" "<<"0"<<endl;
            }
        }
    }
}