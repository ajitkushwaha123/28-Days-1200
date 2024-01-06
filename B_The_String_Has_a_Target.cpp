#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        string s;
        cin>>s;

        // cout<<int(s[0]-96)<<" ";

        long long index = -100;

        vector<char> v;
        vector<char> sn;

        for(long long i=0; i<n ; i++)
        {
            v.push_back(s[i]);
            sn.push_back(s[i]);
        }

        long long a= int(v[0] - 96);

        long long count= 0;

        char temp;

        sort(v.begin() + 1, v.end());
        
        for(long long i = 1 ; i<v.size() ; i++)
        {
            if(int(v[i]-96) < a)
            {
                temp = v[i];
                count = 1;
                index = i;
                break;
            }
        }

        for(int i=1; i<sn.size() ; i++)
        {
            if(temp == sn[i])
            {
                index = i;
                break;
            }
        }
        

        for(long long i = 1 ; i<v.size() ; i++)
        {
            if(int(v[i]-96) == a && count == 0)
            {
                temp = v[i];
                index = i;
            }
        }

        for(int i=1; i<sn.size() ; i++)
        {
            if(temp == sn[i])
            {
                index = i;
            }
        }
        
        

        vector<char> ans;

        if(index != -100)
        {
            ans.push_back(temp);
        }

        for(long long i=0; i<sn.size()  ;i++)
        {
            ans.push_back(sn[i]);
        }

        // index = 

        // ans.erase(ans.begin() + index + 1);

      //  cout<<index<<endl;
       

        for(int i =0; i<ans.size() ; i++)
        {
            if(i == index + 1)
            {
                continue;
            }
            else
            {
                cout<<ans[i];
           }
        }cout<<endl;


    }
}