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
        vector<pair<int ,int>> p;

        for(int i = 0; i<n ; i++)
        {
            int ele;
            cin>>ele;
             
            ele = ele%k;

            p.push_back(make_pair(ele , i+1));
        }
    }
}