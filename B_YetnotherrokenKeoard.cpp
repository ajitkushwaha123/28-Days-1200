#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    //Important thing :
    //  Ascii of 'B' = 68  
    //  Ascii of 'b' = 98 
    //  Ascii of capital letters is 65<=Ascii <=90
    //  Ascii of small letters is 97 <= Ascii <= 123 

    while(t--)
    {
        string  s;
        cin>>s;

        vector<pair<char ,int>> small; // Pair to store small letter  with index
        vector<pair<char ,int>> cap; //Pair to store capital letter with index 


        for(int i=0; i<s.length() ; i++)
        {
            if(int(s[i]) >= 97 && int (s[i]) <= 123)//a == 97 z == 123
            {
                if(int(s[i]) == 98 )  //  b == 98
                {
                    if(small.size() != 0)  // To avoid underflow condition
                    {

                       // ARaBbbitBaby
                       // A

                        small.pop_back();  // Deleting the last inserted  letter from the pair
                    }else
                    {
                        continue;  // To skip the iteration in underflow condition
                    } 
                }
                else
                {
                    small.push_back(make_pair(s[i] , i));
                }
            }

            if(int(s[i]) >= 65 && int (s[i]) <= 90) // 65 to 90
            {
                if(int(s[i]) == 66)  // 'B' = 66
                {
                    if(cap.size() != 0) // To avoid underflow condition
                    {
                        cap.pop_back(); // Deleting the last inserted  letter from the pair
                    }else
                    {
                        continue;  // To skip the iteration in underflow condition
                    }
                }
                else
                {
                cap.push_back(make_pair(s[i] , i));

                }
            }
        }

        vector<pair<int ,char >> p;

        // Pair to merge small letter pair with capital lettr pair

        for(int i=0; i<small.size() ; i++)
        {
            p.push_back(make_pair(small[i].second , small[i].first));
        }

        for(int i=0; i<cap.size() ; i++)
        {
            p.push_back(make_pair(cap[i].second , cap[i].first));
        }

        //Sorting so that order won't affect 

        sort(p.begin() , p.end());

        for(int i=0; i<p.size() ; i++)
        {
            cout<<p[i].second;
        }cout<<endl;
    }
}