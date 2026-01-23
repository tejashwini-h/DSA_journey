// binary search will be done row wise or column wise
// TC : if row wise => o(n * logm)
// TC : if col wise => o(logn * m)
// but here binary search won't uses both row wise and column wise 
// so we use staircase search 
//it is applicable on matrix , which is sorted row wise and column wise
// and in this we analyze cells special property
//pseudocode :
/* start => mat[0][m-1]
    while(row < n && c >= 0)
    cell == key  thn found 
    if cell <key => down(row++)
    if cell > key => left(col--)
*/
// time comp : bigO(n+m)
//starting from first column last element
#include<iostream>
using namespace std;
bool search(int mat[][4],int n,int m,int key )
{
    int i=0 ,j= m-1;
    while(i<n && j>=0)
    {
        if(mat[i][j]==key)
        {
            cout<<"found at cell ("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if (mat[i][j]>key)
        {
            j--; // move left
        }
        else 
        {
            i++; // down
        }
        

    }
    cout<<"not found\n";
    return false;
}
int main()
{
    int mat[4][4]={{10,20,30,40},{15,25,35,45},
                {27,29,37,48},{32,33,39,50}};
    search(mat,4,4,33);
    return 0;
}