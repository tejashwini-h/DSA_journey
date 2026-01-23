// anagram : on rearranging a new word wll be formed
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool isanagram(string str1,string str2)
{
    if( str1.length() != str2.length()) 
    {    
        cout<<"not valid anagram"<<endl;
        return false;
    }
    int count[26]={0};
    for(int i=0 ;i<str1.length();i++)
    {
        int idx = str1[i]-'a';
        count[idx]++;
    }
    for(int i=0 ;i<str2.length();i++)
    {
        int idx = str2[i]-'a';
        if(count[idx]==0)
        {
            cout<<"nat a valid anagrams"<<endl;
            return false;
        }
        count[idx]--;
    }
    cout<<"valid anagrams"<<endl;
    return true;
        
}
int main()
{
string str1,str2;
cout<<"enter ur first string: "<<endl;
cin>>str1;
cout<<"enter ur 2nd string: "<<endl;
cin>>str2;
isanagram(str1,str2);

}