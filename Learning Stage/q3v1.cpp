// ques- take the day number and print the corresponding day 
// for 1 print Monday
// for 2 print Tuesday
// ... and so on to 
// for 7 print Sunday
// Use Switch Case Statements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter the day number: ";
    cin>>day;

    switch(day){
        case 1:
        cout<<"Monday";
        break;          // if you don't give break statement --> it will execute all the lines below it, after executing itself

        case 2:
        cout<<"Tuesday";
        break;         // like if you don't give break here and not even in nxt statements, and give input as 2 --> it will print TuesdayWednesdayThursday...

        case 3:
        cout<<"Wednesday";
        break;           

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid";
    }

    cout<< endl <<"Check";

    return 0;
}

