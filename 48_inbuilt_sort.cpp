// inbuilt : o(nlogn)
/* ascending order : sort(start,end
   descending order : sort(start,end,greater<int>)
*/
#include<iostream>
#include<math.h>
using namespace std;
void printarr(int *arr, int n)
{
    
    for(int i=0;i<n;i++)    
    { 
        cout<<arr[i]<<" , ";
    } 
    cout<<endl;
}
int main()
{
/*int arr[1000],n;
cout<<"enter no. of elements: "<<endl;
cin>>n;
cout<<"enter array elements"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}*/
int arr[8]={5,3,5,2,6,1,8,7};
//sort(arr,arr+8);
printarr(arr,8);

}