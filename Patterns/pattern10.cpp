#include<bits/stdc++.h>
using namespace std;

void print_pattern10(int n)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;

        for(int j=1; j<=stars; j++)
        {
            cout<<"* ";
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
        
        print_pattern10(n);
    }

    
}