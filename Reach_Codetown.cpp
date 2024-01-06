#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int count = 0;

        int vowel = 0;

        for(int i=0; i<s.length() ; i++)
        {

            //CODETOWN

            if(i == 1 || i == 3 || i == 5)
            {
                if(s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H'
                || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' 
                || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
                {
                    count++;
                }
            }
            else
            {
                if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    count++;
                }
            }
        }

      //  cout<<count<<endl;

        if(count > 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}