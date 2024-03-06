#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number with 3 digit: ";
    cin>>n;
    int sum = 0;
    int dup = n;

    while(n>0)
    {
        int ld = n%10;
        sum = sum + ld*ld*ld;
        n= n/10;
    }
    if(sum == dup) cout <<"Armstrong";
    else cout <<"Not a Armstrong Number.";
}