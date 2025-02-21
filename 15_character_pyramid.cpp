#include<iostream>
using namespace std;
int main()
{ 
    char ch = 'a';
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)// 1 to i
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}