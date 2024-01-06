#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;

    while(testCases--)
    {
        int stringLength;
        cin>>stringLength;

        string inputString;
        cin>>inputString;

        int totalCount = 0;
        int countA = 0, countB = 0 , countC =0 ,countD = 0 , countE= 0 , countF= 0, countG = 0, countH= 0, countI = 0, countJ = 0, countK = 0, countL = 0, 
        countM = 0,
        countN = 0, countO =0 , countP = 0, countQ = 0, countR =0, countS=0, countT =0,countU =0, countV=0, countW =0, countX = 0, countY =0, countZ=0;

        for(int i=0; i<inputString.length() ; i++)
        {
            if(inputString[i] == 'A')
            {
                countA++;
            }
            if(inputString[i] == 'B')
            {
                countB++;
            }
            if(inputString[i] == 'C')
            {
                countC++;
            }
            if(inputString[i] == 'D')
            {
                countD++;
            }
            if(inputString[i] == 'E')
            {
                countE++;
            }
            if(inputString[i] == 'F')
            {
                countF++;
            }
            if(inputString[i] == 'G')
            {
                countG++;
            }
            if(inputString[i] == 'H')
            {
                countH++;
            }
            if(inputString[i] == 'I')
            {
                countI++;
            }
            if(inputString[i] == 'J')
            {
                countJ++;
            }
            if(inputString[i] == 'K')
            {
                countK++;
            }
            if(inputString[i] == 'L')
            {
                countL++;
            }
            if(inputString[i] == 'M')
            {
                countM++;
            }
            if(inputString[i] == 'N')
            {
                countN++;
            }
            if(inputString[i] == 'O')
            {
                countO++;
            }
            if(inputString[i] == 'P')
            {
                countP++;
            }
            if(inputString[i] == 'Q')
            {
               countQ++;
            }
            if(inputString[i] == 'R')
            {
                countR++;
            }
            if(inputString[i] == 'S')
            {
                countS++;
            }
            if(inputString[i] == 'T')
            {
                countT++;
            }
            if(inputString[i] == 'U')
            {
                countU++;
            }
            if(inputString[i] == 'V')
            {
                countV++;
            }
            if(inputString[i] == 'W')
            {
                countW++;
            }
            if(inputString[i] == 'X')
            {
                countX++;
            }
            if(inputString[i] == 'Y')
            {
                countY++;
            }
            if(inputString[i] == 'Z')
            {
                countZ++;
            }
        }

        if(countA >= 1)
        {
            totalCount++;
        }
        if(countB >= 2)
        {
           totalCount++;   
        }

        if(countC >= 3)
        {
           totalCount++;   
        }
        if(countD >= 4)
        {
           totalCount++;   
        }
        if(countE >= 5)
        {
           totalCount++;   
        }
        if(countF >= 6)
        {
           totalCount++;   
        }
        if(countG >= 7)
        {
           totalCount++;   
        }
        if(countH >= 8)
        {
           totalCount++;   
        }
        if(countI >= 9)
        {
           totalCount++;   
        }
        if(countJ >= 10)
        {
           totalCount++;   
        }
        if(countK >= 11)
        {
           totalCount++;   
        }
        if(countL >= 12)
        {
           totalCount++;   
        }
        if(countM >= 13)
        {
           totalCount++;   
        }

        if(countN >= 14)
        {
           totalCount++;   
        }
        if(countO >= 15)
        {
           totalCount++;   
        }
        if(countP >= 16)
        {
           totalCount++;   
        }
        if(countQ >= 17)
        {
           totalCount++;   
        }
        if(countR >= 18)
        {
           totalCount++;   
        }

        if(countS >= 19)
        {
           totalCount++;   
        }
        if(countT >= 20)
        {
            totalCount++;
        }
        if(countU >= 21)
        {
           totalCount++;   
        }
        if(countV >= 22)
        {
           totalCount++;   
        }
        if(countW >= 23)
        {
           totalCount++;   
        }
        if(countX >= 24)
        {
           totalCount++;
        }
        if(countY >= 25)
        {
           totalCount++;
        }
        if(countZ >= 26)
        {
           totalCount++;
        }

        cout<<totalCount<<endl;
          }

    return 0;
}
