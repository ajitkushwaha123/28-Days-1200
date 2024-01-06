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

        long long negative = 0;

        vector<long long> v;
        for(long long i=0; i<n  ;i++)

        {
            long long ele;
            cin>>ele;

            if(ele < 0)
            {
                negative++;
            }
            v.push_back(ele);
        }

        long long sum = 0;

        sort(v.begin() , v.end());

        for(long long i =0; i<v.size() ; i++)
        {
            sum += v[i];
        }

        long long sumy = 0;

        if(negative == 0)
        {
            cout<<sum<<endl;
        }
        else if(negative == n)
        {
            if(negative % 2 == 0)
            {
                cout<<-sum<<endl;
            }
            else
            {
                sum = sum - 2*v[v.size() - 1];
                sum = -sum;
                cout<<sum<<endl;
            }
        }
        else
        {
            if(negative % 2 == 0)
            {
                for(long long i=0; i<v.size() ; i++)
                {

                    if(v[i] < 0)
                    {
                        v[i] = -v[i];
                    }

                    sumy += (v[i]);   
                }

                cout<<sumy<<endl;
            }
            else
            {
                long long negMax = v[negative - 1];
                long long posMin = v[negative];

              //  cout<<negMax<<" "<<posMin<<endl;
                long long sneha =0 ;

                for(long long i=0; i<v.size() ; i++)
                {
                    if(v[i] < 0  && (i != negative - 1))
                    {
                        v[i] = -v[i];
                        sneha += v[i];
                      //  cout<<sneha<<" ";
                    }
                    else if(v[i] >= 0 && (i != negative))
                    {
                        sneha += v[i];
                    }
                }

               // cout<<sneha<<endl;

                negMax = -negMax;

                if(negMax >= posMin)
                {
                     sneha += (negMax) - posMin;
                }
                else
                {
                    sneha +=posMin - negMax;
                }

                cout<<sneha<<endl;
            }
        }


    }
}