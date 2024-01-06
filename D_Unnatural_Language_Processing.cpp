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

        vector<char> v;

        int count = 0;

        for(int i =0; i<s.length() - 2 ; )
        {
            if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
            {

                // if(s[i+3] == 'b' || s[i+3] == 'c' || s[i+3] == 'd')
                // {
                //     v.push_back(s[i]);
                //     v.push_back(s[i+1]);
                //     v.push_back(s[i+2]);
                //     v.push_back('.');
                //     i+=3;
                // }
                // else 
                // {
                //     v.push_back(s[i]);
                //     v.push_back(s[i+1]);
                //     v.push_back('.');
                //     i+=2;
                // }

                if(i + 3 > n-1)
                {
                    if(i + 2 == n-1)
                    {
                        v.push_back(s[i]);
                        v.push_back(s[i+1]);
                        v.push_back(s[i+2]);
                        break;
                    }
                    else
                    {
                        v.push_back(s[i]);
                        v.push_back(s[i+1]);
                        break;
                    }
                }
                else
                {
                    if(s[i+3] == 'b' || s[i+3] == 'c' || s[i+3] == 'd')
                    {
                        v.push_back(s[i]);
                       v.push_back(s[i+1]);
                       v.push_back(s[i+2]);
                      v.push_back('.');
                      count++;
                       i+=3;
                 }else{
                    v.push_back(s[i]);
                    v.push_back(s[i+1]);
                    v.push_back('.');
                    count++;
                    i+=2;
                }
                }
                
            }
        }

        int dif  = n - v.size() + count;

        // if(v.size() - count != n)
        // {
       //     cout<<dif<<endl;
        // }

        if(dif > 0)
        {
            for(int i = n-dif ; i<s.length() ; i++)
            {
                v.push_back(s[i]);
            }
        }
        for(int i=0; i<v.size() ; i++)
        {
            cout<<v[i];
        }cout<<endl;


    }
}