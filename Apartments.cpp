#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v;

    for(int i=0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<int> s;
    for(int i= 0; i<m ; i++)
    {
        int ele;
        cin>>ele;

        s.push_back(ele);
    }

    sort(v.begin() , v.end());
    sort(s.begin() , s.end());

    vector<int> ans ;

    for(int i=0; i<v.size(); i++)
    {
        for(int j = 0; j<s.size() ; j++)
        {

          //  cout<<s[j]<<" "<<v[i]<<endl;
            int dif = abs(v[i] - s[j]);
            if(dif <= k)
            {
              //  cout<<s[j]<<" ";
                ans.push_back(s[j]);
                s.erase(s.begin() + j);
            }
        }
    }

    cout<<ans.size()<<endl;


}