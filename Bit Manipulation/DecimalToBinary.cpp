#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    while( n >= 1 )
    {
        int m = n%2 ;
        v.push_back(m);
        n = n/2;
    }

    reverse(v.begin() , v.end());

    for(int i= 0; i < v.size() ; i++)
    {
        cout<<v[i];
    }cout<<endl;
}