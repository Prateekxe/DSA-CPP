// ques - A school has following grade system:
// a. below 25 - F 
// b. 25 to 44 - E
// c. 45 to 49 - D
// d. 50 to 59 - C
// e. 60 to 79 - B
// f. 80 to 100 - A
// ask use to enter marks and print the corresponding grade 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks<25){     // it will check if marks is less than 25, if yes it will exexute else it will go to next else if
        cout<<"F";
    }
    else if(marks>=25 && marks<=44){ // if compiler has reached here, it means that marks are surely greater than 25, hence there is no need to write first condition of this else if that is marks>=25
        cout<<"E";
    }
    else if(marks>=45 && marks<=49){ //if compiler has reached here, it means that marks are surely greater than 44, hence there is no need to write first condition of this else if that is marks>=45
        cout<<"D";
    }
    else if(marks>=50 && marks<=59){ // same goes further
        cout<<"C";
    }
    else if(marks>=60 && marks<=79){
        cout<<"B";
    }
    else if(marks>=80 && marks<=100){
        cout<<"A";
    }

    else{
        cout<<"Wrong Input Given.";
    }

    return 0;

}