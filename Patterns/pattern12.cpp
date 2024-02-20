#include<bits/stdc++.h>
using namespace std;

int print_pattern12(int n)
{
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }

        //spaces
        for (int j = 1; j < 2*n-2*i; j++)
        {
            cout<<"-";
        }
        
        //numbers
        for(int j=i; j>=1; j-- )
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int test_cases;
    cout<<"Enter the no. of test cases: ";
    cin>>test_cases;

    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    print_pattern12(n);
}