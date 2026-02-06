// set a bit value to 1 , on a ith position if the present value of ith bit is 0, else 1, thn kep it as it is
// let i=2,num=6
#include<iostream>
using namespace std;
int setbit( int num,int i)
{
int bitmask =1<<i;// left shift is done to get 1 exactly in ith position
return ((num |bitmask));
}
int main()
{
cout<<setbit(6,3);//2 is ith position of 1
return 0;
}
