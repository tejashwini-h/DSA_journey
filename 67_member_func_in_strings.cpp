/* member functions:

str.length()
str.at(idx)
str.substr(startldx,size)
str.find(word)
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "hello world";
    cout<<str.length()<<endl;
    cout<<str[3]<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(3,4)<<endl;

    cout<<str.find("m")<<endl;// op: 18446744073709551615 (without int idx = str.find("m");)

    int idx = str.find("m");
    cout<<idx<<endl; //op: -1;
    return 0;
}
