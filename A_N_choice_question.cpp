#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a,b;
    cin>>a>>b;

    vector<int> v;

    for(int i=0; i<n ; i++)
    {
        int s;
        cin>>s;

        v.push_back(s);
    }

    int sum = a+b;

    for(int i =0; i<v.size() ; i++)

    {
        if(sum == v[i])
        {
            cout<<i+1<<endl;
            break;
        }
    }


}