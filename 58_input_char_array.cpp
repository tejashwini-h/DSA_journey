#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char word[30];
// cin>>word; ignores whitespaces
cin.getline(word,100,'.');// here dot is delimiter , if a sentence gas '.' ,thn after that everything wll be ignored
cout<<"your word was: "<<word<<endl;
cout<<"length: "<<strlen(word)<<endl;
}