#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char word[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        if(word[s++] != word[e--])
        {
            cout<<"not palindrome";
            return false;
        }
    }
    cout<<"valid palindrome";
    return true;
}
int main()
{
    char word[8] = "racecar";
    ispalindrome(word ,strlen(word));
}