// WAP to judge whether a number is palindrome or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int dup = n;
    int rev = 0;

    while(n>0)
    {
        int ld = n%10;
        rev = (rev*10) + ld;
        n = n/10;
    }

    if(dup == rev) cout << "It is a Palindrome.";
    else cout<<"It is not a palindrome.";
}