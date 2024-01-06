// arr[] = {1,1,3,2,3,4,2} Ans = 4;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    vector<int> v;

    for(int i=0; i<t; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int ans = 0;

    for(int i=0; i<v.size() ; i++)
    {
        ans = ans^v[i];
    }

    cout<<ans<<endl;
}