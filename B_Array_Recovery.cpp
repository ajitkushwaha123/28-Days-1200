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

        for(int i =0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        int count=  0;

        for(int i= 2; i<v.size() ; i++)
        {
            if(v[i] < v[i-1])
            {
                count++;
            }
        }

        vector<int> s;

        if(count == 0)
        {
            s.push_back(v[0]);

            for(int i=1; i<v.size() ; i++)
            {
                s.push_back(v[i] - v[i-1]);
            }

            for(int i=0; i<s.size() ; i++)
            {
                cout<<s[i]<<" ";
            }cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}