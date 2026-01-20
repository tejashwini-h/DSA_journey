#include<iostream>
using namespace std;
//o( nlogn) is better then o(n^2)
//o(n^2)
void selection(int *a,int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int minidx = i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[minidx])
            {
                minidx= j;
            }
        }
        swap(a[i],a[minidx]);
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
 selection(a,n);
printarr(a,n);
return 0;
}

