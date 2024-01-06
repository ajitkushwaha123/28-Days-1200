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

        for(int i=0; i<n ; i++)

        {
            int ele;
            cin>>ele;

            ///v[i] >= x;

            if(ele >= k)
            {
                continue;
            }
            else
            {
                v.push_back(ele);
            }
        }


        if(v.size() != 0)
        {
            vector<int> s;

        for(int i=1; i<v.size() ; i++)
        {
            s.push_back(v[i] - v[i-1]);
        }

        s.push_back(v[0]);
        s.push_back(2*(k - v[v.size() - 1]));

        int max = s[0];

        for(int i=0; i<s.size() ; i++)
        {
            if(max < s[i])
            {
                max = s[i];
            }   
        }

        cout<<max<<endl;

        }

        else
        {
            cout<<2*k<<endl;
        }
    }
}