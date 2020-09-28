#include<iostream>
#include<cmath> //conio.h also works
using namespace std;
int main()
{
    int age;
    cout <<"Enter you age :";
    cin  >>age;
    switch(age){
        case 16:
            cout <<"Hey , you can drive now! "<<endl;
        break;
        case 18:
            cout <<"Go buy some lotto tickets! "<<endl;
        break;
        case 22:
            cout <<"Buy me some drinks! "<<endl;
        break;
        default:
            cout <<"Sorry , you got nothing! "<<endl;
    }
    return 0;
}
