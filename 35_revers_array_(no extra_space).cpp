// using 2 pointer method
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
int arr[]={1,2,3,4,5};
int start,end,temp;
int n=sizeof(arr)/sizeof(int);
start=0;
end=n-1;
while(start<=end)
{ // we can also swap using inbuilt function swap(arr[start],arr[end])
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
printarr(arr,n);

}
