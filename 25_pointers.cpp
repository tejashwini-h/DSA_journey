//address of operator = & 
//pointer variable= *

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<sizeof(p)<<" is size is of p"<<endl;//op=8
    cout<<sizeof(a)<<" is size is of a"<<endl;//op=4
    cout<<p<<" is address of a"<<endl;//op=address
    cout<<&a<<" is the address of a"<<endl;//same output
    //////////////////////////
    cout<<*p<<endl;//dereferencing op=10
}
//a special variable which stores the address of another variable
//dereferenc operator = gets the value of a variable pointed by pointer
//null pointer=which is pointing to nothing
//dereferencing a null pointer will give an error of segmentation fault
