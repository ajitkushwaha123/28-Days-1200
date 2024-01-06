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

        vector<int> a;
        vector<int> s;

        for(int i=0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(ele);
        }

        for(int i=0; i<n ; i++)
        {
            int ele;
            cin>>ele;
            
            s.push_back(ele);
        }

        vector<pair<int , int>> p;

        for(int i=0; i<n ; i++)
        {
            p.push_back(make_pair(a[i] , s[i]));
        }

        sort(p.begin(),  p.end());

        // for(int i=0; i<p.size(); i++)
        // {
        //     cout<<p[i].first<<" "<<p[i].second<<endl;
        // }

        vector<int> ans;

        int max = 0;
        for(int i=0; i<p.size()  ; i++)
        {
            if(p[i].first == p[i+1].first)
            {
                if(p[i].second >= p[i+1].second && (p[i].second >= max))
                {
                    max = p[i].second;
                  //  ans.push_back(max);
                }
                else if(p[i].second < p[i+1].second && (p[i+1].second >= max) )
                {
                    max = p[i+1].second;

                }
            }

            else if(p[i].first != p[i+1].first)
            {
                if(max >= p[i].second)
                {
                  ans.push_back(max);
                  max = 0;   
                }
                else 
                {
                  ans.push_back(p[i].second);
                  max = 0;
                }
                // ans.push_back(max);
                // max = 0;
            }
        }

        int sum = 0;
        for(int i=0; i<ans.size(); i++)
        {
            sum += ans[i];
        }

        cout<<sum<<endl;
    }
}