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

        string s;
        cin>>s;

        int count = 0;
        vector<int> v;

        for(int i=0; i<s.length() ; i++)
        {
            if(s[i] == '#')
            {
                v.push_back(count);
                count = 0;
            }
            else
            {
                count++;
            }
        }

        v.push_back(count);

        sort(v.begin() , v.end());

        int max = v[v.size() - 1];

      //  cout<<max<<endl;

        int ans = -1;

        if(max >= 3)
        {
            ans = 2;
            cout<<ans<<endl;
        }
        else
        {

            int sum = 0;

            for(int i=0; i<v.size() ; i++)
            {
                sum += v[i];
            }

            cout<<sum<<endl;
        }

        // for(int i=0; i<v.size() ; i++)
        // {
        //     cout<<v[i]<<" ";
        // }cout<<endl;
    }

}