#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n = 3;
        vector<vector<char>>v;

        for(int i =0; i<3 ; i++)
        {

            vector<char> row;
            for(int j = 0 ; j<3 ; j++)
            {
                char ele;
                cin>>ele;

                row.push_back(ele);
            }
            
            v.push_back(row);
        }

        int posI = -1;
        int posJ = -1;

        for(int i=0; i<v.size() ; i++)
        {
            for(int j= 0; j<v.size() ; j++)
            {
                if(v[i][j] == '?')
                {
                    posI = i;
                    posJ = j;
                }
            }
        }

        char a,b,c;

     //   cout<<posI<<" "<<posJ<<endl;

        vector<char> ans;

        for(int i = 0; i<v.size() ; i++)
        {

            if(i == posI)
            {
                    for(int j = 0; j<v.size() ;j++)
                    {
                        ans.push_back(v[i][j]);
                    }
            }
        }

        int countA = 0 , countB = 0, countC = 0;

        for(int i=0; i<ans.size()  ;i++)
        {
            if(ans[i] == 'A')
            {
                countA++;
            }
            if(ans[i] == 'B')
            {
                countB++;
            } 

            if(ans[i] == 'C')
            {
                countC++;
            }
        }

        if(countA == 0 && countB > 0 && countC > 0)
        {
            cout<<'A'<<endl;
        }
        else if(countA > 0 && countB == 0 && countC > 0)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;
        }
    }
}