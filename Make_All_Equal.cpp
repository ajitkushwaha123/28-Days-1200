#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int  t;
    cin>>t;

    while(t--)
    {
        long long int  n,m;
        cin>>n>>m;

        vector<long long int > v;
        
        for(long long int  i=0; i<n ; i++)
        {
            long long int  ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        long long int  max = v[v.size() - 1];

        long long int sum = 0;

        for(long long int  i=0; i<v.size() ; i++)
        {
            sum += (max - v[i]);   
        }

        // cout<<sum<<" "<<m<<endl;

        if(m == n-1 || m == n )
        {
            cout<<n-1<<endl;
        }
        else if(m > n/2)
        {
            if(n% 2 != 0)
            {
                m = n/2 + 1;
            }
            else
            {
                m = n/2;
            }

            if(sum % m == 0)
            {
               cout<<sum/m<<endl;
            }
            else
            {
              cout<<(sum / m) + 1<<endl;
            }
        }
       else if(sum % m == 0)
       {
        cout<<sum/m<<endl;
       }
       else
       {
        cout<<(sum / m) + 1<<endl;
       }
    }
}


// 7
// 7 1
// 1 2 3 4 5 6 7 
// 7 2
// 1 2 3 4 5 6 7 
// 7 3
// 1 2 3 4 5 6 7 
// 7 4
// 1 2 3 4 5 6 7 
// 7 5
// 1 2 3 4 5 6 7 
// 7 6
// 1 2 3 4 5 6 7 
// 7 7
// 1 2 3 4 5 6 7 