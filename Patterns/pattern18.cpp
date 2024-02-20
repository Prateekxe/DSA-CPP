#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        char start = 'E' -(i-1);
        for(int j=1; j<=i; j++)
        {
            cout<<start;
            start++;
        }

        // or this will also work:
        // for(char ch='E'-(i-1); ch<='E'; ch++)
        // {
        //     cout<<ch;
        // }
        cout<<endl;
    }
}

int main()
{
    int test_case;
    cout<<"Enter no. of test cases: ";
    cin>>test_case;
    
    for(int i=0; i<test_case; i++)
    {
        int n;
        cout<<"Enter the value of 'n': ";
        cin>>n;
        
        print_pattern(n);
    }

    
}