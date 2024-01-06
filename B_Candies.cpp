#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        vector<int> v;
        vector<int> ans;

        int n;
        cin>>n;

        int  count  = 0;

        if(n%2 == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(n == 1)
            {
                cout<<"1"<<endl;
                cout<<"1"<<endl;
            }
            else if(n > 1)
            {
                int mask = 1;
                int bits = log2(n) + 1;
              //  cout<<bits<<endl;

                while(bits > 0)
                {
                    if((n&mask))
                    {
                        v.push_back(1);
                    }
                    else
                    {
                        v.push_back(0);
                    }

                    mask = mask << 1;
                    bits--;
                }

                reverse(v.begin() , v.end());

                for(int i=0; i<v.size() - 1 ; i++)
                {
                    if(v[i] == 1)
                    {
                        ans.push_back(2);
                    }
                    else
                    {
                        ans.push_back(1);
                    }
                }

                cout<<ans.size()<<endl;

                for(int i= 0; i<ans.size() ; i++)
                {
                    cout<<ans[i]<<" ";
                }cout<<endl;

            }
        }
    }
}