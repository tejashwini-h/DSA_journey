#include<iostream>
#include<cstring>
using namespace std;
void toupper( char word[],int n)
{
    for(int i=0 ;i<n;i++)
    {
        char ch = word[i];
        if(ch>='a'&& ch<='z')
        {
            continue;
        }
        else    
        {
            word[i] = ch -'A'+'a';
        }
    }cout<<word<<endl;
}
int main()
{
    char word[] ="ApPle";
    toupper(word,strlen(word));
    

}