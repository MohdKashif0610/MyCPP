// there are two types of header files:
// 1. system header files: It comes with the compiler
#include <iostream>
// 2. user defined header files: It is written by the programmer
// include "this.h" //--> this will produce an error if this.h is not present in the current directory

using namespace std; // this line means that we are using the standard namespace

int main(){
    int a=4, b=5;
    cout<<"Operator in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    // Arithmetic operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;   
    return 0;
}