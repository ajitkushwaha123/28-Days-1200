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

        for(int i=0; i<n; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        int sneha = 0;

        if(k == 1)
        {
            for(int i=0; i<v.size() - 1; i++)
            {
                if(v[i] > v[i+1])
                {
                    sneha++;
                }
            }

            if(sneha > 0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }

        else
        {
            cout<<"YES"<<endl;
        }
     }
}