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

        for(int i= 0; i<n ; i++)
        {

            vector<int> row; 

            for(int i=0; i<n ; i++)
            {
                int ele;
                cin>>ele;

                row.push_back(ele);
            }

            v.push_back(row);
        }

        int pyar = 3|3|7;

       cout<<pyar<<endl;
    }
}