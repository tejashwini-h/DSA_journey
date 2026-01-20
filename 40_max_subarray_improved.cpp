//using brute force
#include<iostream>
#include<math.h>
using namespace std;
void maxsubarraySum1(int *a,int n)
{ int maxsum = 0; " __INT_MIN__";
for(int i=0;i<n;i++)
{ int c=0;
    for(int j=i;j<n;j++) 
    {
        c  += a[j]; 
        maxsum=max(maxsum,c);
    }         
         
    } 
    cout<<maxsum<<endl;
}
int main()
{
int a[6]={2, -3, 6, -5, 4, 2};
int n=sizeof(a)/sizeof(int);
maxsubarraySum1(a,n);
return 0;
}
