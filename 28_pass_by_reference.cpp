//reference variable : is an alternative name(alias) for a already existing variable
/*
a=10
&b=a
here  a and b refers to same location in memory
/*int a=20;
    int &b=a;
    b=25;
    cout<<a<<endl;
    cout<<b<<endl;*/
#include<iostream>
using namespace std;
void changeA(int &a)
{ 
    a=10; 
    cout<<a<<endl;

}
int main()
{
    int a=20; 
    changeA(a);
    cout<<a<<endl;
    return 0;
}