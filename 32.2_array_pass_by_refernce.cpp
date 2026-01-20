#include<iostream>
using namespace std;
void printarr(int num[], int n)
{   
    for(int i=0;i<n;i++)
    {   
       cout<<num[i]<<","; 
    }
cout<<endl;
}
int main()
{
    // in call by value , copy of array will be created
    int arr[]={1,2,3,4,5};// in call by reference both arr and ptr will point to same memory location
    int n=sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)<<endl;
    printarr(arr,n);
    return 0;

}
