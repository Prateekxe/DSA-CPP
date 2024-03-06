// WAP to count the digits of a number

#include<bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
int count = 0;
for(int i=0; n>0; i++){
    n = n/10;
    count++;
}
return count;
}


//Another function :
// int count_digits(int n)
// {
//     int count = (int) (log10(n) + 1);
//     count ++;
//     return count;
// }

int main()
{
int num;
cout<<"Enter the number for which you want to count the digits: ";
cin>>num;
int cd = count_digits(num);
cout << "The number of digits present is: "<< cd<<endl;
}