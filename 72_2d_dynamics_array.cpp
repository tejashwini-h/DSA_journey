// we cant do directly 2d array , we can do it by , 1st creating 1d arrays and thn combineing then
// array of integer : int arr or int *arr = new int[size]
// array og pointer : int*arr or int **arr = new int *[size]
// no of columns == memory space
 #include<iostream>
using namespace std;
int main()
{
int rows ;//(for ptr)
int col ;//(fot arr)
cout<<"enter rows : ";
cin>>rows;
cout<<"enter columns : ";
cin>>col;
int* *matrix = new int*[rows];
for (int i=0;i<rows;i++)
{
    matrix[i] = new int[col];
}
// data store 
int x=0;
for(int i=0;i<rows;i++)
{
for(int j=0;j<col;j++)
{
matrix[i][j] = x++;
cout<< matrix[i][j]<< " ";
}
cout<<endl;
}
return 0;
}