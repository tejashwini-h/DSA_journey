#include<iostream>
#include<math.h>
using namespace std;
/*int main()
{
    int n;
    cout<<"enter no ";
    cin>>n;
    int isprime = true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime= false;
            break;
        }
    }
    if(isprime)
    {
        cout<<"prime no"<<endl;
    }
    else
    {
        cout<<"not prime no"<<endl;
    }
}*/
int main()
{
    int n;
    cout<<"enter no ";
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
         cout<<"not prime no"<<endl;
        }
        else
        {
            cout<<"prime no"<<endl;
        }

    }

}
    
