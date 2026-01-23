#include<iostream>
#include<cstring>
using namespace std;
void revers(char word[],int n)
{
    int st=0,ed = n-1;
    while(st<ed)
    {
        swap(word[st],word[ed]);
        st++;
        ed--;
    }
}
int main()
{
char word[]="code";
revers(word,strlen(word));
cout<<word<<endl;
return 0;
}