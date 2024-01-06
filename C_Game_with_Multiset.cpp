#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;

    vector<int> v;
    vector<int> bv;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int mask = 1;

        if(a == 1)
        {
            mask = mask << b;
        }

        v.push_back(mask);

        if(a == 2)
        {
            bv.push_back(b);
        }
    }

    for(int i=0; i<v.size() ;i++)
    {
       cout<<v[i]<<" ";
    }cout<<endl;

    sort(v.begin() , v.end());

    int sum = 0;

    for(int i=0; i<bv.size() ; i++)
    {
        for(int j = 0 ; j<v.size() ; i++)
        {
            
        }
    }




    
}+