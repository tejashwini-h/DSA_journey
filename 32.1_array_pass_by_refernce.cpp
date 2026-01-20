#include<iostream>
using namespace std;
void ref(int arr[])// func by array name
{   
    arr[0]=1000;
}
void ref2(int *ptr)// func by pointer 
{   
    ptr[0] = 2000;
}
int main()
{
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;//address
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    //ref(arr); // passing the array name is equ. to passing pointer
    cout<<arr[0]<<endl;

    ref2(ptr);// on calling using pointer
    cout<<ptr[0];

    return 0;
/* array mane can be converted to pointer 
   when array is passed , it is passed by reference
   arr[] == *arr */

}
    