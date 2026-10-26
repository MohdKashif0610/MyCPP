#include<iostream>
using namespace std;

int c= 45;

int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is: "<<c<<endl;
    cout<<"the global c is: "<<::c<<endl; // this will print the global c value which is 45
    return 0;
}