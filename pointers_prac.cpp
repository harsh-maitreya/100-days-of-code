
#include <iostream>
#include <stdio.h>
using namespace std;
/*
int main()
{

    int a=10;
    int *p;                           
    p=&a;                         //pointer pointing to a variable in stack
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; 
    return 0;
}
*/
/*
int main()
{
    int A[5]={2,4,6,8,10};
    int *p;
    p=A;             //the name of array points to the first element of the array so no need to use &. If we have to use it, p = &A[0];
    for(int i=0; i<5;i++)
    {
        cout<<p[i]<<endl;
    }

}
*/
/*
int main()
{
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for(int i =0;i<5;i++)
    cout<<p[i]<<endl;

    delete []p;

}
*/
struct Rectangle
{
    int lenght;
    int breadth;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;

}
