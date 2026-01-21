#include<iostream>
using namespace std;
//o( nlogn) is better then o(n^2)
//o(n^2)
void insertion(char a[],int n)
{   
    for(int i=1;i<n;i++)
    {
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]< curr)
        {
            swap(a[prev],a[prev+1]);
            prev--;
        }
        a[prev+1]=curr;
    }
}
void printarr(char a[], int n)
{
    
    for(int i=0;i<n;i++)    
    { 
        cout<<a[i]<<" , ";
    } 
    cout<<endl;
}
int main()
{
 char a[5]={'a','m','l','r','b'};
 insertion(a,5);
printarr(a,5);
return 0;
}

