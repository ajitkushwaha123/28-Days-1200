#include<bits/stdc++.h>
using namespace std;
int main()
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

    int count = 0;

    int q;
    cin>>q;

    sort(v.begin() , v.end());

   

    while(q--)
    {
        int a;
        cin>>a;

        int low = 0;
        int high = n-1;
        int ans = n;

        while(low <= high)
        {
            int mid  = (low+high)/2;
            if(v[mid] > a)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        cout<<ans<<endl;
        // for(int i=0; i<v.size() ; i++)
        // {
        //     if(v[i] <= a)
        //     {
        //         count++;
        //     }
        // }

        // cout<<count<<endl;
        // count = 0;
    }
}