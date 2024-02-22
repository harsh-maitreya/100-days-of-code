#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;//int &r;this will give an error cuz it's only declared not initialized.
    /*int b=5;
    r=b;
    cout<<a;*/ //the reference variable will be changed and 5 will be printed
    cout<<a<<endl<<r<<endl;//10 will be printed 2 times
    a=25;
    cout<<a<<endl<<r<<endl;//25 will be printed 2 times
    r=30;
    cout<<a<<endl<<r<<endl;//30 will be printed 2 times

}