#include<iostream>
#include<math.h>
using namespace std;
void trap(int *height,int n)
{       
    int leftmax[20000],rightmax[20000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];
    for(int i=1;i<n;i++)
    {  leftmax[i]=max(leftmax[i-1],height[i-1]);
        //cout<<leftmax<<",";//o/p => -infinity,4,4,4,6,6,6
    }
    for(int i=n-2;i>=0;i--)
    {  
        rightmax[i]=max(rightmax[i+1],height[i+1]);
       // cout<<rightmax<<",";//o/p => -infinity,5,5,5,6,6,6
    }
    int watertrapped=0;
    for(int i=0;i<n;i++)
    {
        int currwater;
        currwater= min(leftmax[i], rightmax[i])-height[i];
        if(currwater>0)
        {
            watertrapped += currwater;
        }
    }
    cout<<"watre trapped = "<<watertrapped<<endl;
}
 
int main()
{ 
    int height[7]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
    trap(height,n);
    return 0;
}
/* time comp => 1st loop= o(n)
   time comp => 2nd loop= o(n)
   1st+2nd => o(n+n) => o(2n) => o(n){ ignores constants}
therefo linear time complexity*/