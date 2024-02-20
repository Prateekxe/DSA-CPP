#include<bits/stdc++.h>
using namespace std;

void print_pattern_up(int n)
{
    //UPPER PART
    int spaces=0;
    for(int i=1; i<=n; i++)
    {
        //stars
        for(int j=1; j<=n-(i-1); j++)
        {
            cout<<"*";
        }

        //spaces
        
        for(int j=1; j<=spaces; j++)
        {
            cout<<" ";
        }
        spaces += 2;

        //stars
        for(int j=1; j<=n-(i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    
}

void print_pattern_down(int n)
{
    //LOWER PART
    int spaces= 8;
    for(int i=1; i<=n; i++)
    {
        //stars
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        //spaces
        
        for(int j=1; j<=spaces; j++)
        {
            cout<<" ";
        }
        spaces -= 2;

        //stars
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
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
        
        print_pattern_up(n);
        print_pattern_down(n);
    }

    
}