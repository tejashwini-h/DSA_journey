// 1 => set bit 
// 2 => clear bit
/*  
2 = 10          | 1  = 1
4 = 100         | 3  = 11
8 = 1000        | 7  = 111
16 =10000       | 15 = 1111
32 =100000      | 31 = 11111     
   no. of 0's  ===  no. of 1's
*/
#include<iostream>
using namespace std;
bool powof2( int num)
{
if(num & (num-1))
{
return true;
}
else 
{
return false;
}
}


int main()
{
cout<<powof2(6);//2 is ith position of 1
return 0;
}