#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m;
        cin>>m;

        vector<int> ans;

        while(m--)
        {
            int n;
            cin>>n;

            vector<int> v;

            for(int  i=0; i<n ; i++)
            {
                int ele;
                cin>>ele;

                v.push_back(ele);
            }

            for(int i=0; i<v.size() ;i++)
            {
                cout<<v[i]<<" ";
            }cout<<endl;
        }
    }
}