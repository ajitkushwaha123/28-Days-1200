#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;

    vector<int> v;

    for(int i=0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int dif = 0;
    int count = 0;
    int ans = -1;

    for(int i =0; i<n-1 ; i++)
    {
        dif = v[i+1] - v[i];
        if(dif <= d)
        {
            ans = v[i+1];
            count++;
            break;
        }
    }

    if(count > 0)
    {
        cout<<ans<<endl;
    }
    else

    {
        cout<<"-1"<<endl;
    }
}