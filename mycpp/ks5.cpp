#include <iostream>
using namespace std;

int main(){
    // cout<<"this is program";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"You can not come to my party";
    }
    else
    {
        cout<<"You are come to my party";
    }

    return 0;
}