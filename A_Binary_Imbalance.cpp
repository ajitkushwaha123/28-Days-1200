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

        string s; /// binary string 
        cin>>s;

        int zeroCount = 0;

        for(int i = 0; i<s.length() ; i++)
        {
            if(s[i] == '0')
            {
                zeroCount ++;
            }
        }

        if(zeroCount > 0)

        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}