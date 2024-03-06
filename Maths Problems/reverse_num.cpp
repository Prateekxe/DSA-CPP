//WAP to reverse a number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Number: ";
    cin>>n;

    int rev = 0;
    while(n>0){
        int ld= n%10; // extracting last digit
        rev = rev*10 + ld; // storing revrse in rev
        n = n/10; // eliminating last digit of a number
    }

    cout << rev;

}