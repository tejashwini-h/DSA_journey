#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)// 1 to i
        {
            cout<<"*";
        }
        
        for(int j=1;j<=2*(4-i);j++)// 1 to i
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)// 1 to i
        {
            cout<<"*";
        }
        cout<<endl;
     }// down
    for(int i=4;i>=1;i--)
     {
         for(int j=1;j<=i;j++)// 1 to i
         {
             cout<<"*";
         }
         
         for(int j=1;j<=2*(4-i);j++)// 1 to i
         {
             cout<<" ";
         }
         for(int j=1;j<=i;j++)// 1 to i
         {
             cout<<"*";
         }
         cout<<endl;
      } 
    
    return 0;
}