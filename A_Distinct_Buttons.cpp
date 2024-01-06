#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;

    while(testCases--)
    {
        int numPairs;
        cin>>numPairs;

        int isLeft = 0;
        int isRight = 0;
        int isUp = 0;
        int isDown = 0;

        while(numPairs--)
        {
            int a,b;
            cin>>a>>b;

            if(a < 0)
            {
                isLeft = 1;
            }

            if(a > 0)
            {
                isRight = 1;
            }

            if(b > 0)
            {
                isUp = 1;
            }

            if(b < 0)
            {
                isDown = 1;
            }
        }

        if(isLeft == 1 && isUp == 1 && isDown == 1 && isRight == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
