#include<iostream>
using namespace std;
int linear(int arr[],int key, int n)
{
   for(int i=0;i<n;i++)
    { 
        if(arr[i]==key)
        cout<<"match found"<<endl;
    }
    return -1;
}

int main()
{
    int key;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter key "<<endl;
    cin>>key;
    linear(arr,key,n);
    return 0;

}
/* time comp: relation between i/p size(array size) and no of operation */