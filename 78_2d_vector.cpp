#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

for(int i= 0;i<matrix.size();i++)
{
for(int j=0;j<matrix[i].size();j++)
{
cout<<matrix[i][j]<< " ";
}
cout<<endl;
}

cout<<"-------------"<<endl;
// this type is only possible in vectors
vector<vector<int>> matrix1 = {{1,2,3},{4,5,},{6}};// this type is not possible in arrays

for(int i= 0;i<matrix1.size();i++)
{
for(int j=0;j<matrix1[i].size();j++)
{
cout<<matrix1[i][j]<< " ";
}
cout<<endl;
}


return 0;
}