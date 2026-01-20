//using brute force but improved
#include<iostream>
#include<math.h>
using namespace std;
void maxsubarraySum1(int *a,int n)
{ int maxsum = 0;"INT MIN";
for(int i=0;i<n;i++)
{ 
    for(int j=i;j<n;j++) 
    {
        int c=0;

        for(int k=i;k<=j;k++){
            c  += a[k];

        }
        cout<<c<<",";
        maxsum=max(maxsum,c);
    }      
    cout<<endl;
    } 
cout<< "max sum="<<maxsum<<endl;
}
int main()
{
int a[6]={2, -3, 6, -5, 4, 2};
int n=sizeof(a)/sizeof(int);
maxsubarraySum1(a,n);
return 0;
}
