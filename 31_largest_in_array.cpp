#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    int max=a[0];
    cout<<"initial max value= "<<max<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            //cout<<"assining value "<<a[i]<<" to max"<<endl;
        }
    }
        cout<<"largest value="<<" "<<max<<endl;
    return 0;
}