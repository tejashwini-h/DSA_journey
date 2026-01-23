/*conversion of data types from one type to another
1. implicite conversion : done by compiler to avoid data loss */
#include<iostream>
using namespace std;
int main()
{
    cout<<int('a')<<endl;//o/p = 97
    cout<<('a'+3)<<endl;// o/p= 100. Here a is converted to ascii value implicite , 97+3=100
    cout<<('a'+3.0)<<endl;// o/p = 100.0
    cout<<(10/3.0)<<endl;/*implicite conversion , we never declared that we will
    use doule and o/p should be in double but compiler did it */ 
    int pi = 3.14;
    cout<<int(pi)<<endl;// o/p=3
    cout<<((float)10/3)<<endl; // o/p= 3.333
    cout<<(10/3)<<endl;// o/p = 3
    cout<<char('a'+1)<<endl;// o/p = b
    
}// bool -> char -> int -> float -> double 
/*explicit conversion : done by programmer */