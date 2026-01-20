#include<iostream>
using namespace std;
//o( nlogn) is better then o(n^2)
//o(n^2)
void insertion(int *a,int n)
{   
    for(int i=1;i<n;i++)
    {
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>curr)
        {
            swap(a[prev],a[prev+1]);
            prev--;
        }
        a[prev+1]=curr;
    }
}
void printarr(int *a, int n)
{
    
    for(int i=0;i<n;i++)    
    { 
        cout<<a[i]<<" , ";
    } 
    cout<<endl;
}
int main()
{
 int a[]={5,3,2,1,4};
 int n=sizeof(a)/sizeof(int); 
 insertion(a,n);
printarr(a,n);
return 0;
}

