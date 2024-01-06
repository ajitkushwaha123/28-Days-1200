#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    
   // int bits = log2(n) + 1;
    //cout<<bits<<endl;

    vector<int> ans;

for(int i=1 ; i<= n ; i++)
{

    int bits = log2(i) + 1;
   // cout<<bits<<endl;

    int count = 0;
    int mask = 1;
    while(bits > 0)
    {
        if((i&mask))
        {
            count++; 
        }
        mask = mask << 1;
        bits--;

      //  ans.push_back(count);

        
    //  5 4 3 2 1 0
    }

    ans.push_back(count);

   // cout<<count<<endl;
}


int sum = 0;

for(int i=0; i<ans.size() ; i++)
{
   // cout<<ans[i]<<" ";
    sum += ans[i];
}

cout<<sum<<endl;

}