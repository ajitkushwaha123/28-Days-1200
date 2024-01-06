#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
    cin>>s;

    if(int(s[0]) >= 97 && int(s[0]) <= 123)
    {
        for(int i = 1 ; i<=8 ; i++)
    {
        if(i != int(s[1])- 48)
        {
            cout<<s[0]<<i<<endl;
        }
    }
    


    for(int i = 1 ; i<=8 ; i++)
    {
        if(s[0] != char(96+i))
        {
            cout<<char(96+i)<<s[1]<<endl;
       }
    }
    }



    else
    {

         for(int i = 1 ; i<=8 ; i++)
    {
        if(s[1] != char(96+i))
        {
            cout<<s[0]<<char(96+i)<<endl;
       }
    }

           for(int i = 1 ; i<=8 ; i++)
    {
        if(i != int(s[0])- 48)
        {
            cout<<i<<s[1]<<endl;
        }
    }

   
    }
    }

}