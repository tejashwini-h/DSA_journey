#include<iostream>
using namespace std;
int main()
{
// bitwise operator
cout<<(3 & 5)<<endl;// AND operator
cout<<(3 | 5)<<endl;// OR operator
cout<<(3 ^ 5)<<endl;// XOR operator(exclusive OR)
cout<<(~6)<<endl;// binary not operator
/* the first number will be the the most significent bit(MSB)
 this will tells the sign  of the complete byte , ie. if 1 => -ve and if 0=> +ve 
  here we get op as -7 , instead of 1,  bcz the steps are 
1) 6 => 00000110(binary of 6)
2) complement of 6 => 11111001
3) 1's complement of (11111001) =>0000110 
3) add 1 to it to get magnitude => 
 0000110
      +1
-----------
 0000111
4) 0000111 =>7, we got this 
5) sign decision , it is don by considering 6th complement , it starts 
with 1 , -ve
.:. answer => -7

THIS WHOLE PROCESS IS CALLED 2'S COMPLEMENT */
}