#include<iostream>
using namespace std;
void bubblesort_ass(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        //bool isswap=false;
        //cout<<"outer loop";
        for(int j=0;j<n-i-1;j++)
        {
            //cout<<"inner loop";
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                //isswap =true;
            }
            //if(isswap ==false)
            //{ return ;
              //  }
        }
    }
}

/*void bubblesort_des(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}*/
void printarr_ass(int *arr, int n)
{
    cout<<"ass:"<<endl;
    for(int i=0;i<n;i++)    
    { 
        cout<<arr[i]<<" , ";
    } 
    cout<<endl;
}
int main()
{
    int arr[]={5,3,2,1,4};
    int n=sizeof(arr)/sizeof(int);
    bubblesort_ass(arr,n);
    //bubblesort_des(arr,n);
    //printarr_ass(arr,n);
    return 0;
}
/* no of time yhe loop is : [1+2+3+4+....+n-1] =>
n(n-1)/2 => n^2 
theref : TC : o(n^2) n*/