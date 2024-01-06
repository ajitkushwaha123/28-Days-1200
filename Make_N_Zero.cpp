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

        long long count=  0;

        if(n % 4 == 0 || n%3 == 0 || n%7 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
           while(n > 0)
           {
               if(n%3 == 0)
               {
                count++;
                break;
               }
               else
               {
                  n = n - 4;
               }

            //   cout<<n<<endl;
           }

        //   cout<<count<<endl;

           if(count > 0)
           {
            cout<<"YES"<<endl;
           }
           else
           {
            cout<<"NO"<<endl;
           }
        }

        
    }
}