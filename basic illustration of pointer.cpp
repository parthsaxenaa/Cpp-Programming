#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *p; //declearation of pointer.
    p=&a; //initilization of pointer.
    //& is used as reference.
    
    
    cout<<a<<endl;
    cout<<p<<endl;//pointer storing address of the variable assigned to it.
    cout<<&a<<endl;
    cout<<*p<<endl;//dereferencing (going to the location where pointer refering and give the variable).
    cout<<&p<<endl;//showing address of itself not the value assigned to it.
    cout<<&a<<endl;

    return 0;
}