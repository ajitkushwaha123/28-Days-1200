#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;

        cin>>a>>b>>c;

        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        int even = 0 , odd = 0;

        for(int i= 0; i<v.size() ; i++)
        {
            if(v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        int x,y,z;

        if(a == b  && b == c)
        {
            x = 1; y = 1; z =1;
        }
        else
        {
            if(odd == 3 || odd == 0)
            {
               x = 1; y = 1; z =1;   
            } 
            else if(odd == 2)
            {
                if(a % 2 == 0)
                {
                    x = 1; y = 0; z =0;  
                }
                else if(b % 2 == 0)
                {
                     x = 0; y = 1; z =0;   
                }
                else
                {
                     x = 0; y = 0; z =1;   
                }
            }
            else
            {
                if(a % 2 != 0)
                {
                    x = 1; y = 0; z =0;  
                }
                else if(b % 2 != 0)
                {
                     x = 0; y = 1; z =0;   
                }
                else
                {
                     x = 0; y = 0; z =1;   
                }
            }
        }

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}