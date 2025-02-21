#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++) 
    {
        for(int j=1;j<=4-i;j++)// elements in column are 5-i
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}