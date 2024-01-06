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

        int count = 1 , cnt = 1;

        for(int i= 0; i<s.length() - 1 ; i++)
        {
            if(s[i] == s[i+1])
            {
                count++;
            }

            if(i != 0)
            {
                if(s[i] == s[i+1] && s[i] == s[i-1])
                {
                    cnt++;
                }
            }
        }

        if(count == 4)
        {
            cout<<"-1"<<endl;
        }
        else if(count == 1 && cnt == 1)
        {
            cout<<"4"<<endl;
        }
        else if(count == 3 && cnt == 1)
        {
            cout<<"4"<<endl;
        }
        else
        {
            cout<<"6"<<endl;
        }

      ///  cout<<count<<" "<<cnt<<endl;
    }
}