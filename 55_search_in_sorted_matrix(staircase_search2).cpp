//starting from first row last element
// time comp : bigO(n+m)
#include<iostream>
using namespace std;
bool search(int mat[][4],int n,int m,int key )
{
    int i=n-1 ,j= 0;
    while(i>=0 && j<n)
    {
        if(mat[i][j]==key)
        {
            cout<<"found at cell ("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if (mat[i][j]>key)
        {
            i--; // move left
        }
        else 
        {
            j++; // down
        }
        

    }
    cout<<"not found\n";
    return false;
}
int main()
{
    int mat[4][4]={{10,20,30,40},{15,25,35,45},
                {27,29,37,48},{32,33,39,50}};
    search(mat,4,4,25);
    return 0;
}