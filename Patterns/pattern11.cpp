#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        int start=1;
        if(i%2==0) start = 0; // if row no. is even, start the row with 0 
        else start = 1;  // if row no. is odd, start the row with 1
        for(int j=1; j<=i; j++) 
        {
            cout<<start<<" " ;
            start = 1 - start; // for flipping 0 to 1 & 1 to 0.
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