#include<iostream>
using namespace std;
int main()
{
    int mark[5]={1,2,3};
    int len=sizeof(mark)/sizeof(int);
    for(int i=0; i<len; i++)
    {
        cin>>mark[i];
    }
    for(int i=0; i<len; i++)
    {
        cout<<mark[i];
    }
}
