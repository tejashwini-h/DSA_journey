// 2d array name behaves as a row pointer

#include<iostream>
using namespace std;
int main()
{
    int mat[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    cout<<mat<<" = "<<&mat[0][0]<<endl;
    cout<<mat+1<<" != "<<&mat[0][1]<<endl;
    cout<<mat+1<<" = "<<&mat[1][0]<<endl;
    cout<<mat+1<<endl;
    return 0;
}