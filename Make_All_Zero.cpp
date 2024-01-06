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
       vector<int> s;

       for(int i= 0; i<n ; i++)
       {
         int ele;
         cin>>ele;

         v.push_back(ele);
         s.push_back(ele);
       }

       int neg = 0;

       int count = 0;

       int min = 0;
       for(int i=v.size()  - 1; i >= 0 ; i--)
       {
           sort(s.begin() , s.end());
            if(v[i] < s[n - v.size() - i])
            {
                break;
            }
            else
            {
                count++;
            }
       }

       cout<<count<<endl;

    }
}