#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;

    vector<int> v;

    int four =0 , three = 0 ,two = 0 , one = 0 ;

    for(int i = 0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        if(ele == 4)
        {
            four++;
        }
        else if(ele == 3)
        {
            three++;
        }
        else if(ele == 2)
        {
            two++;
        }
        else
        {
            one++;
        }

        v.push_back(ele);
    }

    
    int taxi = 0;

     int count = 0;

    if(two % 2 == 0)
    {
        taxi += (two/2);
        count=  0;
    }
    else
    {
        taxi += (two/2);
        count = 1;
    }

  //  cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;

    taxi += four;

    if(three >= one)
    {
        three -= one;
        taxi += one;

        if(count == 1)
        {
            taxi += 1;
            taxi += three;
        }
        else
        {
            taxi += three;
        }
    }
    else
    {

        // one > three;
        
        taxi += three;
        one -= three;

     //   cout<<one<<endl;

        if(count == 1)
        {
            taxi += 1;
            one -= 2;

            if(one > 0)
            {
                taxi += one/4;
            one = one%4;
            
            if(one > 0)
            {
                taxi += 1;
            }
            }
        }
        else
        {
            taxi += one/4;
            one = one%4;
            
            if(one != 0)
            {
                taxi += 1;
            }
        }
    }

    cout<<taxi<<endl;


    
}