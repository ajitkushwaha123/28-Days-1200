#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n;
        cin>>n;

        int pl =3;

        vector<vector<int>> ans;
        vector<vector<int>> clone;

        while(pl--)
        {
            vector<pair<int ,int>>p;

            for(int i=0; i<n ; i++)
            {
                int ele;
                cin>>ele;

                p.push_back(make_pair(ele , i));
            }

            sort(p.begin() , p.end());

            reverse(p.begin() , p.end());

            vector<pair<int ,int>>pf;

            for(int i =0; i<3; i++)
            {
                pf.push_back(make_pair(p[i].second , p[i].first));
            }

            sort(pf.begin() , pf.end());

            vector<int> temp;

            for(int i=0; i<pf.size() ; i++)
            {
                temp.push_back(pf[i].second);
            }

            ans.push_back(temp);
            clone.push_back(temp);
        }  

        for(int i=0; i<ans.size() ; i++)
        {
            for(int j= 0; j<ans.size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }cout<<endl;
        }
        int maxSum1 = ans[0][0] + ans[1][1] + ans[2][2]; 
        int maxSum2 = ans[0][0] + ans[1][2] + ans[2][1];  
        int maxSum3 = ans[0][1] + ans[1][0] + ans[2][2]; 
        int maxSum4 = ans[0][1] + ans[1][2] + ans[2][0]; 
        int maxSum5 = ans[0][2] + ans[1][1] + ans[2][0]; 
        int maxSum6 = ans[0][2] + ans[1][0] + ans[2][1];

        int answer = max({maxSum1  , maxSum2 , maxSum3 , maxSum4 , maxSum5 , maxSum6});
        cout<<answer<<endl;
                
    }


    
}