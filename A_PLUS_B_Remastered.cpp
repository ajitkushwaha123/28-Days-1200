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
        vector<int> b;

        for(int i= 0 ; i<n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(ele);
        }

        for(int i= 0 ; i<n ; i++)
        {
            int ele;
            cin>>ele;

            b.push_back(ele);
        }

        sort(a.begin() , a.end());
        sort(b.begin() , b.end());

        reverse(b.begin() , b.end());

        int sum = a[0] + b[0];
        

        int flag = 0;

        for(int i= 0 ; i<a.size() ; i++)
        {
            if(a[i] + b[i] != sum )
            {
                flag++;
            }
        }

        if(flag > 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i  = 0; i<a.size() ; i++)
            {
                cout<<a[i]<<" "; 
            }

            cout<<endl;

            for(int i = 0 ; i<b.size() ; i++)
            {
                cout<<b[i]<<" ";
            }

            cout<<endl;
        }
    }
}