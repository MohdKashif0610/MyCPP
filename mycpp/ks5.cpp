#include <iostream>
using namespace std;

int main(){
    // cout<<"this is program";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0))
    {
        cout<<"You can not come to my party";
    }
    else if(age==18)
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1)
    {
        cout<<"you are not yet born"<<endl;
    }
    else
    {
        cout<<"You are come to my party";
    }

    return 0;
}