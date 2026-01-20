#include<iostream>
using namespace std;
void printarr(int *arr,int n)
{
for(int i=0;i<n;i++)
{ 
    cout<<arr[i]<<",";
}
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    }
        for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }
    printarr(arr,n);
    return 0;
}
/* space comp : i/p size & extra space 
                   (n)         (n)
                        =o(n)
time copm:  o(n+n) => o(2n){ we ignore constant in TC} therefore TC = o(n)
*/