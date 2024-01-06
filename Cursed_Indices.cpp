#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int mask = 1;

    int b1 = log2(a) + 1;
    int b2 = log2(b) + 1;

    int t = max(b1,b2);

    int count = 0;

    while(t > 0)
    {
        int xor1 = a&mask;
        int xor2 = b&mask;

      ///  cout<<xor1<<" "<<xor2<<endl;

        if(xor1 != xor2)
        {
            count++;
        }

        // if(((a&mask)&(b&mask))) 
        // {
        //     count++;
        // }

      //  cout<<count<<endl;
        mask = mask << 1;
        t -= 1;
    }

    cout<<count<<endl;

}

// int b1 = log2(A) + 1;
    // int b2 = log2(B) + 1;

    // int  maxi = max(b1,b2);

    // int mask = 1;

    // int count = 0;

    // while(maxi > 0)
    // {
    //     if(((A&mask) ^ (B&mask)))
    //     {
    //         count++;
    //     }

    //     mask = mask << 1;
    //     maxi--;
    // }

    // return count;