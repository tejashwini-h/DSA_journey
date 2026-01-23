#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool vowels(string str)
{
    int c=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
        }
    }
    cout<<c<<" no. of vowels are present"<<endl;
    return c;
}
int main()
{
string str;
cout<<"enter ur string: "<<endl;
cin>>str;
vowels(str);

}