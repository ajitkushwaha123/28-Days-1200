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

        string s;
        cin>>s;

        int count= 0;

        int flag = 0;

        for(int i=0; i<s.length() ; i++)
        {
            // if(s[i] == '1' && (i != s.length() - 1))
            // {
            //     if(flag != 1)
            //     {
            //         cout<<"IDK"<<endl;
            //         count++;
            //     }
            //     else
            //     {
            //         cout<<"NO"<<endl;
            //     }
            // }
            if(s[i] == '0')
            {
                cout<<"NO"<<endl;
                flag = 1;
            }
            else if(s[i] == '1' &&( i != s.length() - 1))
            {
                if(flag == 1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"IDK"<<endl;
                    count++;
                }
            }
        }

        if(count == n-1 && s[s.length() - 1] == '1')
        {
            cout<<"YES"<<endl;
        }

        if(s[s.length() - 1] == '1' && flag != 0)
        {
            cout<<"NO"<<endl;
        }
       
        
    }
}