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

            if(i % 2 == 0)
            {
                ele = -ele;
            }
    
            v.push_back(ele);
        }

        vector<int> p;

        p.push_back(v[0]);

        for(int i = 0; i< v.size() ; i++)
        {
            p.push_back(p[i-1] + v[i]);
        }

        // for(int i=0; i<p.size(); i++)
        // {
        //     cout<<p[i]<<" ";
        // }cout<<endl;

        for(int i=0; i<p.size() ; i++)
        {
            if(p[i] == 0)cout<<"YES"<<endl;

            cout<<"NO"<<endl;
        }

      



       
    }
}