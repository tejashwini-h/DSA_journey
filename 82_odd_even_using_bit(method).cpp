// odd => right most bit is one
// even => right most bit is zero

#include<iostream>
using namespace std;
void oddoreven( int num)
{
if((num&1)==0)
{
cout<<"even"<<endl;
}
else
{
cout<<"odd"<<endl;
}
}
int main()
{
oddoreven(5);
oddoreven(8);
return 0;
}
