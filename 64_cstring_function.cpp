#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char str1[]="hello";
char str2[100]="world";
strcat(str1,str2);
cout<<str1<<endl;

char str3[100];
strcpy(str3,str1);
cout<<str3<<endl;

char str4[100]="hello";
char str5[100]="hello";
cout<< strcmp(str4,str5)<< endl;

char str6[100]="abc";
char str7[100]="xyz";
cout<< strcmp(str6,str7)<< endl;

char str8[100]="xyz";
char str9[100]="abc";
cout<< strcmp(str8,str9)<< endl;


}