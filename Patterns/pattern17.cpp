#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        //spaces
        for(int j=1; j<=n-i; j++)
        {
            cout<< " ";
        }

        //characters
        char ch='A';
        int breakpoint = (2*i-1)/2 + 1;
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
            
        }

        //spaces
         for(int j=1; j<=n-i; j++)
        {
            cout<< " ";
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