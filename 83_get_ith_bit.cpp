#include<iostream>
using namespace std;
int getbit( int num,int i)
{
int bitmask =1<<i;// left shift is done to get 1 exactly in ith position
if(!(num &bitmask))
{
return 0;
}
else
{
return 1;
}
}
int main()
{
cout<<getbit(6,2);//2 is ith position of 1
return 0;
}
