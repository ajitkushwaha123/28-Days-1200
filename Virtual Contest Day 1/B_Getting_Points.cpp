#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin>>tc;

    while(tc--)
    {
       long long n,p,l,t;
        cin>>n>>p>>l>>t;

        long long d = 0;

        long long nT = 0;

        nT = (n-1)/7;
        nT += 1;

        long long sneha = -1;

        if(nT % 2 == 0)
        {
            sneha = 0;
        }
        else
        {
            sneha = 1;
        }
        d = nT/2;

        long long ajit = d*(2*t + l);

        if(sneha == 1)
        {
            ajit += (t + l);
            d += 1;
        }
        if(p > ajit)
        {
            p -= ajit;
            if(p % l == 0)
            {
                p /= l;
            }
            else
            {
                p /= l;
                p+=1;
            }
            d += p;

            if(sneha == 1)
            {

            }
        }
        else if(p < ajit)
        {
            long long temp = 2*t + l;
            if(p% temp == 0)
            {
                p /= temp;
            }
            else
            {
                p /= temp;
                p+=1;
            }

            d = p;
        }

        cout<<n-d<<endl;
    }
}