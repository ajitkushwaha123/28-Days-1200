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

        int zeroCount = 0;
        int oneCount = 0;

        for(int i=0; i<s.length()  ; i++)
        {
            if(s[i] == '0')
            {
                zeroCount++;
            }
            else
            {
                oneCount++;
            }
        }

        if(zeroCount > oneCount)
        {
            cout<<"YES"<<endl;
        }
        else if(zeroCount >= 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        



      //  cout<<oneCount<<" "<<zeroCount<<endl;
    }
}