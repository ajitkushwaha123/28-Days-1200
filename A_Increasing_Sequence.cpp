#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
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

        vector<int> s;

        int ans = 0;
        for(int  i= 0; i<v.size(); i++)
        {
            ans++;
            if(v[i] == ans)
            {
                ans++;
                s.push_back(ans);
            }
            else
            {
                s.push_back(ans);
            }
        }

        cout<<s[s.size() - 1]<<endl;

        // for(int i=0; i<s.size() ; i++)
        // {
        //     cout<<s[i]<<" ";
        // }cout<<endl;
    }
}