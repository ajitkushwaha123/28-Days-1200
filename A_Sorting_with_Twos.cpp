#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;


        for(int i=0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        // for(int i=0 ; i<v.size() ; i++)
        // {
        //     if(!((i+1)&(i)))
        //     {
        //         cout<<"LOVE YOU"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"love you 2"<<endl;
        //     }
        // }

        int count = 0;


        for(int i=0; i<v.size() - 1 ; i++)
        {
            if(v[i] > v[i+1])
            {
                if(((i+1)&(i)))
                {
                    count++;
                }
            }
        }

 //       cout<<count<<endl;

        if(count > 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}