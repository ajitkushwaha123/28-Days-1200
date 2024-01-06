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

        //a e
        // b c d

        string s;
        cin>>s;

        int i =0;
        vector<char> v;

        while(i < n-2)
        {
            if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
            {
                if(s[i+1] == 'a' || s[i+1] == 'e')
                {
                    if(s[i+2] == 'b' || s[i+2] == 'c' || s[i+2] == 'd')
                    {
                        // if(i+3 < n)
                        // {
                            if(s[i+3] == 'b' || s[i+3] == 'c' || s[i+3] == 'd')
                        {
                            v.push_back(s[i]);
                            v.push_back(s[i+1]);
                            v.push_back(s[i+2]);
                            v.push_back('.');
                            i += 3;
                        }
                        else
                        {
                            v.push_back(s[i]);
                            v.push_back(s[i+1]);
                            v.push_back('.');
                            i+= 2;
                        }
                      
                        // }
                        
                    }
                }
            }
        }

        for(int i =0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;
    }
}