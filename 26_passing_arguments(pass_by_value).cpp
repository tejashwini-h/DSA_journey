//pass by value: the value of the variable is passed to the function 
//when parameter is a copy of actual argument variable in memory
#include<iostream>
using namespace std;
void changeA(int a)
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
