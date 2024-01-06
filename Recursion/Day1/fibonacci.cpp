#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    //Base Case
    if(n == 0) return 0;
    if(n == 1) return 1;
    // Recusive function 

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n);
}


// n == 5 