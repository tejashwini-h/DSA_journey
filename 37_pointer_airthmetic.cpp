#include<iostream>
using namespace std;
int main()
{
    int a=30;
    int *aptr= &a;
    cout<<aptr<<endl;
    aptr++;// here int = 4...so now ptr will point to the ptr+4 th index address
    cout<<aptr<<endl;
    // if it  is ptr+3 thn it is same as (3*4) bcz int=4byte int ptr, ptr=4 
}