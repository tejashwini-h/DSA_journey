//given n=m => n*n
#include<iostream>
using namespace std;
// tome comp : o(n^2)
int diagonal(int mat[][3],int n)//no m , since we have n*n
{
    int sum=0;
    for(int i=0;i<n;i++)//for rows
    {
        for(int j =0;j<n;j++)//for column
        {
            if(i==j)
            {
                sum += mat[i][j];
            }
            else if (j==n-i-1)//we use elif , so that ele of odd matrix will not be added 2 times
            {
                sum += mat[i][j];
            }
            
        }
    }
    cout<<"sum = "<<sum<<endl;
    return sum;
}
// // // // // // // // // // /// / // 
// for time comp : bigO(n)
int digonal2(int mat[4][4],int n)
{
int sun=0;
for(int i=0;i<n;i++)
{
sun += mat[i][i];
if(i != n-i-1)
{
sun += mat[i][n-i-1];
}
}
cout<<"sum = "<<sun<<endl;
    return sun;
}
int main()
{
int mat[4][4]={{1,2,3,4},{5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
//diagonal(mat,4);
int mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
diagonal(mat2,3);
return 0;
}