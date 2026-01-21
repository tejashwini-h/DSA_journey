/* kadane's algm is a basic dynamic programming algm
time comp: for max subarry sum(bruth force) = o(n^3)
time comp: for max subarry sum(bruth force improved) = o(n^2)
time comp: for max subarry sum(kadane) = o(n) 
if ur current sum is less thn o thn reinitialize to 0  */
#include<iostream>
#include<math.h>
using namespace std;
void maxsubarraySum1(int *a,int n)
{ int maxsum =__FLT_MIN__;
int c=0; 
for(int i=0;i<n;i++)
{ 

        c  += a[i]; 
        maxsum=max(maxsum,c);       
         if(c<0) {
        c=0;}
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