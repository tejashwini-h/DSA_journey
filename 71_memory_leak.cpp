/* memory leak occurs when programmeres creat a memory in heap and forget to delete it
leads to reduce performance due to depletion of available memory*/

#include<iostream>
using namespace std;
// as function call is done , the ptr will be removed from sub memory, and pointing variable wll be removed from stack
// as pointing variable wll be removed from memory , the link b/w peap and memory will be removed,
// but the array created in heap wll not be removed and this leads to MEMORY LEAK(we need to delete heap memory explicitely using keyword 'delete')

void func()
{

int size;
cin>>size;
int *arr = new int[size];// dynamically allocated,allocated in heap


int x=1;
for(int i=0;i<size;i++)
{
arr[i]=x;
cout<<arr[i]<< " ";
x++;
}
cout<<endl;

delete [] arr;
}
int main()
{
func();
}