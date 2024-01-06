#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        long long int n,k;
        cin>>n>>k;

        vector<long long int> v;

        for(long long int i =0; i<n  ; i++)
        {
            long long int ele ; cin>>ele;
            v.push_back(ele);
        }

            long long int dif = k;
            for(long long int i= 0 ; i<v.size() ;i++)
            {
                if(v[i]%k == 0){
                    dif = 0;
                }
                else
                {
                    dif = min(dif , k-v[i]%k);
                }
            }

            if(k == 4 && n >= 2)
            {

                long long int even = 0 , odd = 0;

                for(long long int i=0; i<v.size() ; i++)
                {
                    if(v[i] % 2 == 0)
                    {
                        even++;
                    }else
                    {
                        odd++;
                    }
                }

                long long int a= 2;
                long long int b = 1;

                if(even == 0)
                {
                    dif = min(dif , a);
                }
                else if(even % 2 == 0)
                {
                    dif = 0;
                }
                else
                {
                    dif = min(dif , b);
                }
            }
            cout<<dif<<endl;
    }
}