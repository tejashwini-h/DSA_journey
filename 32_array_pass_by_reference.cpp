#include<iostream>
using namespace std;
int main()
{
    int n,i,fact;
    cout<<"enter num";
    cin>>n;
    fact = 1;
    for (i=2 ; i<n+1 ; i ++){
        fact *= i ;
    }
    cout<<fact;
}