#include <iostream>
using namespace std;

int add(int x, int y)
{
    x++;
    return x;
};
int main ()
{
    int num1=10 , num2=20, sum;
    cout<<num1<<endl;
    cout<<add(num1,num2)<<endl;
    //sum = add(num1,num2);
    //cout<<sum<<endl;
}