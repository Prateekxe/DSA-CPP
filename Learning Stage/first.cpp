#include<iostream> // iostream is a input output library
#include<bits/stdc++.h> // to include all the libraries at once --> use #include<bits/stdc++.h> 
using namespace std; // to avoid writing std:: everytime with cout, cin and endl
int main(){

    cout << "hello cpp!"<< endl << "hello there!"<< endl << "I am a line 1." << "\t" << "I am on the same line as line 1. " << "\n"; 
    // you can add as many lines here with as many as endl also

    int x; // declaration of the variable --> int takes 4 bytes --> other types of integers are "long" and "long long"
    long p = 15; // declaration as well as initialization

    cout<<"give the value of x:";
    cin>>x; // taking input
    cout<<"The value of X is:"<<x << endl; // printing input value taken

    int y, z;
    cout<<"give the value of y and z:";
    cin>>y>>z; // this will take multiple input at once
    cout<< "the value of y is:" << y << " and the value of z is:" << z << endl;

    // decimal numbers like 5.82, 7.54 --> float and double
    float a= 5.65; // 4 byte
    double b= 6.12; // 8 bytes
    float c = 5; // you cam also store an integer in float

    //string and getline()
    string s1;
    string s2; // or u can write on the same line --> string s1, s2;  
    cout << "Enter two strings: ";
    cin >> s1 >> s2; // it will not take more tha 2 strings 
    cout <<"the two strings are: "<< s1 << " and " << s2 << endl;

    // to give more than 1 strings upto n strings on the same line, use getline()- an internal function --> this will take the string as an input till the line break
    string str; // define a variable 
    getline(cin, str);
    cout << "the input string/line is: " << str << endl;

    // char
    char ch1; // defining variable
    char ch2 = 'g'; // single quotes are required for a single character while string takes input in double quotes
    cout<<"Enter a single character(ch1): ";
    cin>>ch1; // taking input (if u give more than 1 character as an input, it will only print the first character)
    cout<<"the first entered character(ch1) is: " << ch1<< endl;
    cout<<"the second inputted character(ch2) is: " << ch2<< endl;

    // // sizes taken by data-types
    // char --> 1 byte 

    // int --> 4 bytes 
    // short int --> 2 bytes 
    // long int --> 8 bytes 
    // long long int --> 8 bytes 

    // float --> 4 bytes 
    // double --> 8 bytes




    return 0;
}
