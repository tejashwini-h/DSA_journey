// a type of loop which is special
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str = "hello world";
    for(int i=0;i<str.length();i++)// "." i a dot operator used in opps
    {
        cout<<str[i]<<"-";
    }
    cout<<"\n";
/// in the above we are accessing the characters through indices , we can make it 
// more easier through " for each loop"

/////////////////////////////////////////

    for(char ch:str)
    {
        cout<<ch<<",";
    }
    cout<<endl;
    return 0;
}
