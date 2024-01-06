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

        int ans = -1;

        for(int i = 0 ; i < v.size() ; i++)
        {
            for(int j = i ; j < v.size(); j++)
            {
                if(__gcd(v[i] , v[j]) == 1)
                {
                    ans = i + j + 2;
                }
            }
        }

        cout<<ans<<endl;
    }
}