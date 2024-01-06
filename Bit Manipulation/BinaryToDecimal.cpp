#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int count = 1;
    int ans = 0;

    reverse(s.begin() , s.end());

    // 1 2 4 8 16 

    for(int i = 0 ; i < s.length() ; i++)
    {
       if(s[i] == '1')
       {
         ans += count;
       }

       count *= 2;
    }


    cout<<ans<<" "<<":)"<<endl;
}
