/*write a function to update the ith bit in a number according to given value(0 or 1)
num = 7 ,i = 2,val = 0
num = 7 ,i = 3,val = 1*/
#include<iostream>
using namespace std;
int setbit( int num,int i)
{
int bitmask =1<<i;
return ((num |bitmask));
}
int clearbit( int num,int i)
{
int bitmask = ~(1 << i);
return num & bitmask;
}
// optimized way to update
void updatebit(int num,int i,int val)
{
num = num& ~(1<<i);
num = num | (val<<i);
cout<<num<<endl;
}

int main()
{
cout<<clearbit(7,2);
cout<<endl;
cout<<setbit(7,3);
cout<<endl;
updatebit(7,2,0);// num = 7 ,i = 2,val = 0
updatebit(7,3,1);// num = 7 ,i = 3,val = 1
return 0;
}