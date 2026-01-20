#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;//address
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);// wont affect output 
   
    cout<<*arr<<endl;//value of particular index
    cout<<*(arr+1)/*or arr[1]*/<<endl;
    cout<<*(arr+2)/*or arr[2]*/<<endl;
    return 0;

}
    