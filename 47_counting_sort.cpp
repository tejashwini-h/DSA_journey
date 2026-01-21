// used for low range numbers
// range = minnum- maxnum
// cannot be used for ranges of more eg: 100000
 // generally used for +ve numbers
#include<iostream>
using namespace std;
void counting_sort(int *arr , int n)
{
      int freq[10000];//range
      int minval=__INT_MAX__,maxval=__FLT_MIN__;//_INT_MIN__;
     // 1st step o(n)
     for(int i=0; i<n;i++)
     {
                minval=min(minval,arr[i]);
                maxval=max(maxval,arr[i]);
                freq[arr[i]]++;
    }
                //2nd step o(range)
    for( int i=minval, j=0;i<=maxval; i++)
    {
        while ((freq[i]>0))
        {
            arr[j++]=i;
            freq[i]--;
        }
                    
    }
     
}   
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
int arr[]={1,4,1,3,2,4,3,7};
int n =sizeof(arr)/sizeof(int);
counting_sort(arr,n);
printarr(arr,n);
return 0;

}