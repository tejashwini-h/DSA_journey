// dynamic memory allocation 
// create 1D dynamic array 
// dynamic means , we dont know the size of the array at the compiler time 
// will take the i/p of size
/* static memory : 1) allocates at compile time 
                        array is created in the stack
                   2) size should be decided at the begining
                   3) statically whatever is allocated , it is allocated in the main memory 
                   4) if stack frame/func(in which allocation is done) is removed from stack , thn it wll be removed from memory also
                   4) if we have allocated in main , thn as main is finished , the memory is also erased

dynamic memory allocation : 1) allocation is done inside the heap memory allocation
                            2) allocated during the heap
                            3) int *ptr{ this part in the main memory} = new int(size){this part in the heap, is created} , array is created in the heap, but the ptr is created in the main memory
*/
#include<iostream>
using namespace std;
int main()
{
// int arr[100] = {1,2,3,4,5}
int size;
cin>>size;
int *arr = new int[size];//dynamically allocate memory

//accessing that memory
int x=1;
for(int i=0;i<size;i++)
{
arr[i]=x;
cout<<arr[i]<< " ";
x++;
}
cout<<endl;
return 0;
}