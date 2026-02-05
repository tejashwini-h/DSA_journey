// find if any pair in sorted vector has target sum
#include<iostream>
#include<vector>
using namespace std;
void pairsum(int *a,int n,int target)
{
    int sum[100];
    int i,j;
    for( i=0;i<=n-1;i++)
    {
        for( j=i;j<=n-1;j++)
        {
            cout<<"("<<a[i]<<","<<a[j]<<")"<<" "<<endl;
            for(int k=0;k<=n;k++)
            {
                sum[k]=a[i]+a[j];
                cout<<"sum = "<<sum[k]<<" "<<endl;
                break;
            }
            for(int m=0;m<n;m++)
            {
                if(target==sum[m])
                {
                    cout<<"target sum found at "<<"("<<a[i]<<","<<a[j]<<")"<<" "<<endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
}

int main()
{
    int a[] ={2,7,11,15};
    int n=sizeof(a)/sizeof(int);
    int target;
    cout<<"enter target sum = ";
    cin>>target;
    pairsum(a,n,target);
    return 0;
}  