#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        // for(int j=1; j<=i; j++) 
        for(char ch='A'; ch <= 'A' + (i-1); ch++)
        {
            // cout<<"* ";
            cout<<ch<<" ";
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
        
        print_pattern(n);
    }

    
}