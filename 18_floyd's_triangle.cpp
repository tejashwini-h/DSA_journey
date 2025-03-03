#include<iostream>
using namespace std;
int main()
{
    int n=1;
    for(int i=0;i<=4;i++) 
    {
        for(int j=0;j<=i;j++)// elements in column are 5-i
        {
            cout<<n++<<" ";
        }
        cout<<endl;
    }
}    