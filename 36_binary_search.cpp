//ued for sorted array
/* step1: find mid
          in even case , mid will be first half's last element
step2: mid==key
if yes thn end 
step3: else 
       if arr[mid]<key = search left
       if arr[mid]>key = search right 
--------------------------------------------
pseudocode : 
 int st=0,end=n-1;
 while(st<=end)
{
 mid= st+end/2
if (arr(mid)== key)
 return mid;
 else if(a(mid)<=key)  2nd half 
       st=mid+1;
 else 1st half , end=mid-1*/ 
#include<iostream>
using namespace std;
int binsearch( int *a,int n, int key)
{   int s=0, e = n-1;
    while(s<e)
    { 
        int mid=(s+e)/2;
        if(a[mid]==key) 
        {
            return mid;
        }
        else if (a[mid]<key)
        { 
            s=mid+1;
        }
         else
        {  
            e=mid-1;
        } 
            
    }
    return -1;
}
int main()
{   
    int a[]={1,2,3,4,5,8,10,35,44};
    int n=sizeof(a)/sizeof(int);
    int key;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";  
    }
    cout<<endl;
    cout<<"enter the element to br scearched from the array"<<endl;
    cin>>key;
    cout<<binsearch(a,n,key)<<endl;
    return 0;
}

