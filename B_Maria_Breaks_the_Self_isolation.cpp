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

        vector<int> v;

        int count = 0;


        for(int i=0; i< n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
            if(v[i] > n)
            {
                count++;
            }
        }

        sort(v.begin() , v.end());

        int max = -1;
        for(int i =0; i<v.size() ; i++)
        {
            if(v[i] > max && v[i] <= n)
            {
                max = v[i];
            }
        }

        cout<<max<<" "<<n-count<<endl;

        if(max <= n-count)
        {
           cout<<n-count+1<<endl;
        }

        else
        {
            
        }
        
    }

}