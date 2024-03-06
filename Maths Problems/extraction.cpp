//WAP to extract each digit of number by taking user input

#include<bits/stdc++.h>
using namespace std;

int size_of_num(int n)
{
    int size_num= 0;
    for(int i =0; n>0; i++)
    {
        n= n/10;
        size_num++;
    }
    // cout<<size_num;
    return size_num;
}


void printing_digits(int s,int n)
{
    for(int i=0; n>0; i++)
    {
        int ld = n % 10; //extract last digit
        cout<<"The digit "<< s - i << "is: "<< ld << endl;
        n = n/10; // this will remove last digit from number
        
    }

}
int main()
{
    int num;
    cout<<"Enter the number which digits you want to extract: ";
    cin>>num;
    int dup = num;

    int s = size_of_num(num);
    printing_digits(s, num);

    cout << "Program Executed Succesfully."<< endl;

}
