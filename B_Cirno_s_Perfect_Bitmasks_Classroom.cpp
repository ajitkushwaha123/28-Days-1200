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

        int y = n&(-n);

        if(n&1)
        {
            //"ODD"

            if(n != 1)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"3"<<endl;
            }
        }else{

        while(n == y || n&y == 0)
        {
            y++;
        }

        cout<<y<<endl;

        }
    }
}