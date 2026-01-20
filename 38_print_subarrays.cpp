#include<iostream>
using namespace std;
void printarr(int *a,int n)
{
for(int i=0;i<n;i++)
{ 
for(int j=i;j<n;j++) 
{
//cout<<"("<<i<<","<<j<<")";
for(int k=i;k<=j;k++){
cout<<a[k];
}
cout<<", ";
}
cout<<endl;
}
}
int main()
{
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
printarr(a,n);
return 0;
}
