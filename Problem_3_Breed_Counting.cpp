#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    vector<int> v;

    for(int  i=0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<int> ps1;
    vector<int> ps2;
    vector<int> ps3;

    // ps.push_back(v[0]);

    int count = 0;
    for(int i= 0 ; i<n ; i++)
    {
        if(v[i] == 1)
        {
            count++;
            ps1.push_back(count);
        }
        

        ps1.push_back(count);
    }

    for(int i=0; i<ps1.size() ; i++)
    {
        cout<<ps1[i]<<" ";
    }cout<<endl;

    count = 0;
    for(int i= 0 ; i<n ; i++)
    {
        if(v[i] == 2)
        {
            count++;
        }

        ps2.push_back(count);
        
    }

    for(int i=0; i<ps2.size() ; i++)
    {
        cout<<ps2[i]<<" ";
    }cout<<endl;

    count = 0;
    for(int i= 0 ; i<n ; i++)
    {
        if(v[i] == 3)
        {
            count++;
        }

        ps3.push_back(count);
       
    }

    for(int i=0; i<ps3.size() ; i++)
    {
        cout<<ps3[i]<<" ";
    }

    while(q--)
    {
        int  a,b;
        cin>>a>>b;

        a = a-1;
        b = b-1;

        if(a > 0)
        {
            cout<<ps1[b] - ps1[a-1]<<" ";  
            cout<<ps2[b] - ps2[a-1]<<" "; 
            cout<<ps3[b] - ps3[a-1]<<" "<<endl;   
        }
        else
        {
            cout<<ps1[b]<<" ";
            cout<<ps2[b]<<" ";
            cout<<ps3[b]<<endl;
        }
    }


    

    
}