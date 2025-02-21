#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=4;i++) 
    {
        for(int j=i;j<=4;j++)// elements in column are 5-i
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------"<<endl;
     for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)// elements in column are i+1
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}