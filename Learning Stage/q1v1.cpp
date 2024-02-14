#include<bits/stdc++.h>
using namespace std;

//ques- write a program that takes input of an age and print if you are adult or not

int main(){
    cout<<"What's your age?" << endl << "Type your age here: ";
    int age;
    cin>>age;

    if(age>=18){
        cout<<"You're an Adult.";
    }
    else{
        cout<<"You're not an Adult.";
    }


}
