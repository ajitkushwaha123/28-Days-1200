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

        int max = v[0];

        for(int i=0; i<v.size() ; i++)
        {
            if(max < v[i])
            {
                max = v[i];
            }
        }

        cout<<max<<endl;

        vector<int> sneha;

        for(int i= 0; i<v.size() - 1; i++)
        {
            sneha.push_back(abs(v[i] - v[i+1]));
        }

     //   int ans = __gcd()

     vector<int> ajit;

        for(int i=0; i<sneha.size() -1 ; i++)
        {
            ajit.push_back(__gcd(sneha[i] , sneha[i+1]));
        }

        int x = ajit[0];

        for(int i = 0; i<ajit.size() ; i++)
        {
            if(x > ajit[i])
            {
                x = ajit[i];
            }
        }

        cout<<x<<endl;

        vector<int> t;

        int count = 0;

        for(int i= 0; i<n + 1; i++)

        {
            t.push_back(max - count*x);
            count++;
        }

        for(int i=0; i<t.size() ; i++)
        {
            cout<<t[i]<<" ";
        }cout<<endl;

        int love = 0;
        
        for(int i= 0; i<t.size() ; i++)
        {
            for(int i= 0; i<v.size() ; i++)
            {
                if(t[i] != v[i])
                {
                    love++;
                }
            }

            if(love == n)
            {
                
            }
        }

    }
}