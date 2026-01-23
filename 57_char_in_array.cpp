#include<iostream>
using namespace std;
int main()
{
    char ch1='a';
    char ch1='X';
    char ch1='%';
    char ch1='9';
    char ch1='/t';
    char ch1='/n';
    cout<<(int) ch1 << endl; // ASCII value of "a" wll be the op
    char ch='f';
    int pos = ch - 'a';
    cout<<"position of 'f' in alphabet : "<<pos <<endl;
    // "helloworld" // string literals
    // literals : is anything whose value is fixed
    char work[] = "code";
    char work[5] = "code";
    char work[] = {'c','o','d','e'};
}
