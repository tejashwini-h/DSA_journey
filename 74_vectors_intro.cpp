// vectors are very similar to dynamic array 
// the major difference  between normal array and vectors is => 
// vectors can resize dynamically at runtime
// also called as sequence containers
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>  vect1;
vector<int>  vect2 ={1,2,3,4};
vector<int>  vect3(5 ,-1);
cout<<vect1.size()<< "\n";
cout<<vect2.size()<< "\n";
cout<<vect3.size()<< "\n";
for(int i=0;i<vect1.size();i++)
{
cout<<vect1[i]<< " ";
} cout<<endl;

for(int i=0;i<vect2.size();i++)
{
cout<<vect2[i]<< " ";
} cout<<endl;

for(int i=0;i<vect3.size();i++)
{
cout<<vect3[i]<< " ";
} cout<<endl;
return 0;
} 