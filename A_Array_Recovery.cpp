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

        vector<int> d;
        for(int i =0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            d.push_back(ele);
        }

        vector<int> a;

        a.push_back(d[0]);

        int count = 0;

        vector<int> s;
        s.push_back(d[0]);


        for(int i=1; i<d.size() ; i++)
        {

            s.push_back(d[i] + s[i-1]);
            
            if(a[i-1] >= d[i])
            {
                a.push_back(a[i-1] - d[i]);
            }
            else
            {
                a.push_back(d[i] + a[i-1]);
            }

        }

        for(int i=0; i<a.size(); i++)
        {
            if(a[i] != s[i])
            {
                count++;
            }
        }

        if(count > 0)
        {
            cout<<"-1"<<endl;
        }
        else
        { 
            for(int i=0; i<s.size(); i++)
        {
            cout<<a[i]<<" ";
        }cout<<endl;
        }

        count = 0;
        
    }
}