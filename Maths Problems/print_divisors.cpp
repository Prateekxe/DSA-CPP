// WAP to print all the divisors of a number

#include<bits/stdc++.h>
using namespace std;

void print_divisors(int n)
{
     for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    print_divisors(n);  
    return 0;
}