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

        vector<int> ps;

        for(int i=0; i< n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        ps.push_back(v[0]);

        for(int  i=1; i<v.size() ; i++)
        {
            ps.push_back(v[i] + ps[i-1]);
        }

        vector<int> ans;

        for(int i=k-1; i<ps.size() ; i++)
        {
            if(i >= k)
            {
                ans.push_back(ps[i] - ps[i - k]);
            }
            else
            {
                ans.push_back(ps[i]);
            }
        }

        // for(int i=0; i<ps.size() ; i++)
        // {
        //     cout<<ps[i]<<" ";
        // }cout<<endl;


        sort(ans.begin() , ans.end());

        //  for(int i=0; i<ans.size() ; i++)
        // {
        //     cout<<ans[i]<<" ";
        // }cout<<endl;

        cout<<ans[ans.size() - 1]<<endl;

    }
}