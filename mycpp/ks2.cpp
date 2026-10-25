// there are two types of header files:
// 1. system header files: It comes with the compiler
#include <iostream>
// 2. user defined header files: It is written by the programmer
// include "this.h" //--> this will produce an error if this.h is not present in the current directory

using namespace std; // this line means that we are using the standard namespace

int main(){
    cout<<"Hello, World!";
    return 0;
}