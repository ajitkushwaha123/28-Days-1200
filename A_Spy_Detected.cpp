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
        vector<int> sneha;

        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
            sneha.push_back(ele);
        }

        sort(v.begin() , v.end());

        v.erase(unique(v.begin() , v.end()) , v.end());

        // for(int i =0; i<v.size() ; i++)
        // {
        //     cout<<v[i]<<" ";
        // }

        int count = 0;

        int temp = -1;

        for(int i= 0; i<sneha.size() ; i++)
        {
            if(v[0] == sneha[i])
            {
                count++;
                temp = sneha[i];
            }
        }

        if(count == 1)

        {
            for(int i =0; i<sneha.size() ; i++)

            {
                if(sneha[i] == temp)
                {
                    cout<<i+1<<endl;
                }
            }
        }
        else
        {
            for(int i =0; i<sneha.size() ; i++)

            {
                if(sneha[i] == v[1])
                {
                    cout<<i+1<<endl;
                }
            }
        }
    }
}