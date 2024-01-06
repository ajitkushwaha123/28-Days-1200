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

        int max = v[0] , min = v[0];

        for(int i=0 ; i<v.size() ; i++)
        {
            max = max|v[i];
            min = min&v[i];
        }

        cout<<max<<" "<<min<<endl;
    }
}