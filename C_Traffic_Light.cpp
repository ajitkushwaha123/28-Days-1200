#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n ;
        cin>>n;

        char c;
        cin>>c;

        string s;
        cin>>s;

        s += s;
     //   cout<<s<<endl;

        int index = -10;

        vector<int> ans;

        for(int i= 0; i<s.length()/2  ; i++)
        {
            if(s[i] == c)
            {
                for(int j = i+1 ; j<s.length() ; j++)
                {
                    if(s[j] == 'g')
                    {
                        index = j;
                        break;
                    }
                }

                cout<<index<<" "<<i<<endl;

                ans.push_back(index - i);
            }
        }

        sort(ans.begin() , ans.end());

        // for(int i=0; i<ans.size() ; i++)
        // {
        //     cout<<ans[i]<<" ";
        // }cout<<endl;

        cout<<ans[ans.size() - 1]<<endl;
    }
}