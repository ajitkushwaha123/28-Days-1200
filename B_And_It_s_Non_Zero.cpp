#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    vector<int> v;

    for(int i=0 ; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<int> ps;
    ps.push_back(v[0]);

    // for(int i=0; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    for(int i = 1; i<v.size() ; i++)
    {
        ps.push_back(v[i] + ps[i-1]);
    }

    for(int i=0; i<ps.size() ; i++)
    {
        cout<<ps[i]<<" ";
    }cout<<endl;

    while(q--)
    {
        int s;
        cin>>s;

        if(s == 1)
        {
            int a,b,x;
            cin>>a>>b>>x;
            
            a = a-1;
            b = b-1;

            int count = 1;

            for(int i = a ; i<=b ; i++)
            {
                ps[i] = ps[i] + count*x;
                count++;
            }

        //    cout<<count<<endl;

            for(int i = b+1 ; i< n ; i++)
            {
                ps[i] += x*(count - 1);
            }

            for(int  i=0; i<ps.size() ; i++)
            {
                cout<<ps[i]<<" ";
            }cout<<endl;
        }
        else if(s == 2)
        {
            int a,b,x;
            cin>>a>>b>>x;

            a = a-1;
            b = b-1;

            // ps[a] += x;
            // ps[b+1] += -x;

            int count = 1;

            for(int i = a ; i<= b ; i++)
            {
                if(i > 0)
                {
                    ps[i] =ps[i-1]+x;
                }
                else
                {
                    ps[i] = count*x;
                }
                count++;
            }

            for(int i=0; i<ps.size() ;i++)
            {
                cout<<ps[i]<<" ";
            }cout<<endl;
        }
        else if(s == 3)
        {
            int a,b;
            cin>>a>>b;

            a = a-1;
            b = b-1;

            if(a > 0)
            {
                cout<<ps[b] - ps[a-1]<<endl;
            }
            else
            {
                cout<<ps[b]<<endl;
            }
        }
    }
}
