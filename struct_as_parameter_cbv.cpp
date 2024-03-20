#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r)
{
    r.length=20;    //call by value, this change in r.length doesn't change actual paramenters
    cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;
}

int main()
{
    struct Rectangle r = {10,5};
    fun(r);
    cout<<"length- "<<r.length<<endl<<"breadth- "<<r.breadth<<endl;
    return 0;
}