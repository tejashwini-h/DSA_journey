//same type, continuous memory allocation
#include<iostream>
using namespace std;
int main()
{
    int mark[5]={1,2,3};//int mark[]={1,2,3};i=3
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<sizeof(mark)<<endl;//o/p=20...(4*5)
    cout<<sizeof(mark)/sizeof(int)<<endl;
    return 0;
}// memory is statically allocated(allocated in compile time)
/* int mark[50]
   int mark[]={1,2,3}
   int mark[50]={1,2,3}
   these are the methods which size cannot be changed while we compile
   it wll be fixed at first wile declaring*/