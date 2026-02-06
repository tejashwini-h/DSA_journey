// clear = a bit value to 0 , on a ith position if the present value of ith bit is 1, else 0, thn kep it as it is
// let i=2,num=6
#include<iostream>
using namespace std;
int clearbit( int num,int i)
{
int bitmask = ~(1 << i);// left shift is done to get 1 exactly in ith position
return num & bitmask;
}


int main()
{
cout<<clearbit(6,1);//2 is ith position of 1
return 0;
}
