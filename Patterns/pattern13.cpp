#include<bits/stdc++.h>
using namespace std;

int print_pattern13(int n)
{
    int num=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}

int main()
{
    int test_cases;
    cout<<"Enter the number of test cases: ";
    cin>>test_cases;

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    print_pattern13(n);
}