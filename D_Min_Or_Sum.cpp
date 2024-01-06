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

        int sum = 0;

        int ans = 0;
        for(int i= 0 ;i<v.size() ; i++)
        {
            sum = sum | v[i];
            ans += sum;
        }


        cout<<sum<<endl;
    }
}