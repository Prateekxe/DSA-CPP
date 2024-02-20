#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
       for(int j=1; j<=n-i;j++) //spaces
       {
        cout<<"-";
       }

       for(int j=1; j<=2*i-1;j++) //stars
       {
        cout<<"*";
       }

       for(int j=1; j<=n-i;j++) //spaces
       {
        cout<<"-";
       }
       
    //    cout<<"\t"<<"no. of spaces on both sides: " <<n-i<<"\t"<<"&"<<" ";
    //    cout<<"no. of stars in between spaces: "<<2*i+1;
       cout<<"\t"<<"No. of spaces, stars , spaces : "<<n-i<<","<<2*i-1<<","<<n-i;
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