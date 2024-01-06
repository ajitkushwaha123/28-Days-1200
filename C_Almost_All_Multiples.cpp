#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> ans;

        int sneha = 0;

        vector<int> factor;

        if(n%k != 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int pf = 0;

            for(int i= 2; i<=n; )
            {
                if(n%i == 0)
                {
                    factor.push_back(i);
                    n = n/i;
                }
                else
                {
                    i++;
                }
            }

            sort(factor.begin() , factor.end());

            for(int i=0; i<factor.size() ; i++)
            {
                cout<<factor[i]<<" ";
            }
            cout<<endl;

            ans.push_back(0);
            ans.push_back(k);

            sneha = k;

            for(int i=2; i<n ; i++)
            {
                if(sneha == i)
                {
                    for(int j = 0 ; j<factor.size() ; j++)
                    {
                        
                    }
                }
            }
        }
    }
}
///   0   3   6   18
/// [2 , 6 , 18, 54]