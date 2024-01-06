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

        int even = 0 , odd = 0;

        sort(v.begin() , v.end());

        for(long long i=0; i<n  ;i++)
        {
            long long ele;
            cin>>ele;

            if(ele % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }

            v.push_back(ele);
        }

        if(even > 0 && odd > 0)
        {
            cout<<"2"<<endl;
        }
        else if(even ==  0)
        {
            vector<int> temp;
            for(int i=0; i<v.size() ; i++)
            {
                temp.push_back(v[i] % 3);
            }

            sort(temp.begin() , temp.end());

            temp.erase(unique(temp.begin() , temp.end()));
            if(temp.size() == 2)
            {
                cout<<"3"<<endl;
            }
        }


    }
}