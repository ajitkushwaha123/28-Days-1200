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

        vector<pair<int , int>>p;
        vector<int> a;
        vector<int> b;

        for(int i = 0 ; i<n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(ele);
        }

        for(int i = 0 ; i<n ; i++)
        {
            int ele;
            cin>>ele;

            b.push_back(ele);
        }

        for(int i = 0 ; i<n ; i++)
        {
            p.push_back(make_pair(b[i] , a[i]));
        }

        sort(p.begin() , p.end());
        int sum = 1;
        
        int cost = 0;

        int count = 0;

        for(int i = 0; i<p.size() ; i++)
        {
            if(sum < n)
            {
                 sum += p[i].second;
                 count++;

                 if(sum == n)
                 {
                    cost += p[i].first*p[i].second;
                 }
                 else
                 {
                    sum -= p[i].second;
                    int m = n-sum;
                    cost += p[i].first*sum + p[i].first*m;
                 }
            }
        }

        cost += count*k;

        cout<<cost<<endl;


    }
}