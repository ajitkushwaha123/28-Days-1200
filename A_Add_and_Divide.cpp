#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int count = 0;

        while(a > 0)
        {
            if(b < a || b > a)
            {
                a = a/b;
                count++;
            }
            else if(b == a)
            {
                b = b + 1;
                count++;
            }
        }

        cout<<count<<endl;
    }
}
