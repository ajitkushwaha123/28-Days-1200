#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        long long a = -1;
        long long b = -1;

        long long count = 10;

        long long index = 0;
        for(long long i=1; i<s.length() ; i++)
        {
            if(s[i] != '0')
            {
                index = i;
                break;
            }
        }

    long long ans =s[index - 1] - 48;

        long long ans2 = s[s.length() - 1] - 48;

        for(long long i= index - 2; i>=0 ; i--)
        {
            ans += count*(s[i] - 48);
            count*=10;
        }

        count = 10;

        for(long long i= s.length() - 2; i>=index ; i--)
        {
            ans2 += count*(s[i] - 48);
            count*=10;
        }

        a = ans;
        b = ans2;

        if(a < b)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
