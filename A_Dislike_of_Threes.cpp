//a%3 != 0 && last_digit != 3;


#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    int k = 0;

    while(t--)
    {
        int n ;
        cin>>n ;
        
        for(int i=1; i<=1666 ; i++)
        {
            if(i % 3 == 0 || i%10 == 3)
            {
                continue;
            }
            else
            {
                k++;

                if( k == n)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }

        k = 0;
    }
}