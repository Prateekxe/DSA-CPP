#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
       for(int j=1; j<=i-1;j++) //spaces
       {
        cout<<"-";
       }

       for(int j=1; j<=2*n-2*i+1;j++) //stars
       {
        cout<<"*";
       }

       for(int j=1; j<=i-1;j++) //spaces
       {
        cout<<"-";
       }
       
    //    cout<<"\t"<<"no. of spaces on both sides: " <<n-i<<"\t"<<"&"<<" ";
    //    cout<<"no. of stars in between spaces: "<<2*i+1;
       cout<<"\t"<<"No. of spaces, stars , spaces : "<<i-1<<","<<2*n-2*i+1<<","<<i-1;
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