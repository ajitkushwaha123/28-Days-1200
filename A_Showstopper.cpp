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

        vector<int> a;
        vector<int> b;

        for(int i=0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            a.push_back(ele);
        }

        for(int  i=0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            b.push_back(ele);
        }

        int bMax = b[b.size()- 1];
        int aMax = a[a.size() - 1];

        int count = 0;

        vector<pair<int , int>> pB;
        vector<pair<int , int>> pA;

        int redFlag = 0;

        for(int  i = 0; i<b.size() - 1; i++)
        {
            if(b[i] > bMax)
            {
                count++;
                pB.push_back(make_pair(i , b[i]));
            }
        }

        for(int  i=0; i<pB.size() ; i++)
        {
            if(pB[i].second > aMax)
            {
                redFlag++;
            }
        }

        for(int  i = 0; i<a.size() - 1; i++)
        {
            if(a[i] > aMax)
            {
                count++;
                pA.push_back(make_pair(i , a[i]));
            }
        }

        for(int  i=0; i<pA.size() ; i++)
        {
            if(pA[i].second > bMax)
            {
                redFlag++;
            }
        }

        // cout<<pA[0].second<<endl;

        int redFlag1 = 0;
        int redFlag2 = 0;

        for(int  i=0; i<a.size() ; i++)
        {
            for(int  j= 0; j<pB.size() ; j++)
            {
                if(i == pB[j].first)
                {
                    if(a[i] > bMax)
                    {
                        redFlag1++;
                    }
                }
            }
        }

        for(int  i=0; i<b.size() ; i++)
        {
            for(int  j= 0; j<pA.size() ; j++)
            {
                if(i == pA[j].first)
                {
                    if(b[i] > aMax)
                    {
                        redFlag2++;
                    }
                }
            }
        }

   //     cout<<redFlag1<<" "<<redFlag2<<" "<<redFlag<<endl;

        if(redFlag > 0 || redFlag1 > 0 || redFlag2 > 0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
}