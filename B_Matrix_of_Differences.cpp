#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<vector<int>> v;
        vector<int> a;

        int count = n*n;
        int flag = 1;

        for(int i=1; i<=n*n ; i++)
        {
            if(i%2 != 0)
            {
                a.push_back(count);
                count -= 1;
            }
            else
            {
                a.push_back(flag);
                flag++;
            }
        }

        for(int i=0; i<n ; i++)
        {
            vector<int> row;

            for(int j = 0 ; j<n ; j++)
            {
                row.push_back(a[i]);
            }
        }

        for(int i=0; i<a.size() ; i++)
        {
            cout<<a[i]<<" ";
            if(i%n == (n-1))
            {
                cout<<endl;
            }
        }
    }
}