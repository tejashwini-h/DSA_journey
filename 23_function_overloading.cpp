//function overloading : multiple function with same name but different parameters
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<(a+b)<<endl;
    return a+b;
} 
double sum(double a,double b)
{
    cout<<(a+b)<<endl;
    return a+b;
}
int main()
{
    sum(2,3);
    sum(2.3,3.4);
    return 0;

}