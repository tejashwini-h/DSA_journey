// pass by reference: the address of the variable is passed to the function
//when we pass the reference of the argument to the function
//the changes made in the function(changea) will reflect in the main function
#include<iostream>
using namespace std;
//can be done by using pointer and reference variable
//using  pointer
void changeA(int *ptr)
{ 
    *ptr=10; 
    cout<<*ptr<<endl;

}
int main()
{
    int a=20;
    changeA(&a);
    cout<<a<<endl;
    return 0;
}