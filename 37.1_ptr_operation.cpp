// we cannot do ptr1+ptr2 but we can do ptr1 - ptr2..only if both are of same type
#include<iostream>
using namespace std;
int main()
{   
    int a=5;
    int *ptr=&a;
    int *ptr2=ptr+3;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    int ptr3=ptr2-ptr;
    cout<<ptr3<<endl;
    cout<<"------for array--------"<<endl;
//---------------------------
    int arr[]={1,2,3,4,5};
    int *aptr=arr;
    int *aptr1=aptr+3;
    cout<<*aptr<<endl;//1
    cout<<*aptr1<<endl;//4
    cout<<aptr1-aptr<<endl;//4-1=3(3 elemets btw aptr and aptr1)
    cout<<"------for comparision --------"<<endl;
    cout<<(aptr1 >  aptr);
    cout<<(aptr1 < aptr);
    cout<<(aptr1 == aptr);
}