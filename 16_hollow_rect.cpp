#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        cout<<"*";//first;
        for(int j=1;j<=3;j++)
       {
            if(i == 1 || i == 4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
         }
        
        
            cout<<"*"<<endl;//last line
    }
}
