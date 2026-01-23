/* strings in c++ :

c++ strings are objects of pre-defined string cls in STL
STL : (standred templet library) is a library of useful header files 
 
c++ strings have a useful member functions.
c++ trings are dynamic(their size can chnage at run time , but for char it wont change)
c++  string support operators like (+,==,>,< etc)
c++ string are sorted contiguously in memory 

these are also the difference btw string and char
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str= "hello";
    cout<<str<<endl;
    str= "yellow";
    cout<<str<<endl;
    cout<<str[0]<<endl;

    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;
    string str1;
    cin>>str1; // wont consider white space 
    cout<<str1<<endl;
    
    string str2;
    getline(cin,str2);// consider whitespace , we can add delimiter
    cout<<str2<<endl;

    return 0;
}