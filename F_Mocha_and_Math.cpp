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

    

        vector<int> answer;

        for(int i=0; i<n ; i++)
        {
            int ele;

            cin>>ele;
            v.push_back(ele);

            
        }

            int max = v[0];


        for(int i=0; i<v.size() ; i++)
        {
          answer.push_back(max&v[i]);
        }

        sort(answer.begin() , answer.end());

        cout<<answer[0]<<endl;
        // sort(v.begin() , v.end());
        // // int min = v[0] , max = v[n-1];

        // int ans = min&max;
        // cout<<ans<<endl;
    }
}