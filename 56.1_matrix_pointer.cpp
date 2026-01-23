// passing matrix pointer to functions
/* in 1d array  int *arr == int arr[]
similarly..... func(int(*ptr)[4]) == func(int mat[][4])
in this  we pass the row pointer  
// here it will be pass by reference , whenever wll cll or pass pointer we it 
wll not be created again and again , it will be pointing to whole row 
*/
#include<iostream>
using namespace std;
void func(int mat[][4],int n,int m)
{
    cout<<"0th row pointer"<<mat<<endl;
    cout<<"1st row pointer"<<mat+1<<endl;
    cout<<"2nd row pointer"<<mat+2<<endl;
// we do dereferencing to display elements of row
    cout<<"0th row value "<<*(*mat)<<endl;// or mat[0][0]
    cout<<"1st row value "<<*(*(mat+1))<<endl;//or mat[1][0]
    cout<<"2nd row value "<<*(*(mat+2)) <<endl;//or mat[2][0]
//          *(*(mat+i)+j) == mat[i][j]
}
//// both are same , the void function
void func2(int *(mat)[4],int n,int m)
{
    cout<<"0th row pointer"<<mat<<endl;
    cout<<"1st row pointer"<<mat+1<<endl;
    cout<<"2nd row pointer"<<mat+2<<endl;
// we do dereferencing to display elements of row
    cout<<"0th row value "<<*(*mat)<<endl;// or mat[0][0]
    cout<<"1st row value "<<*(*(mat+1))<<endl;//or mat[1][0]
    cout<<"2nd row value "<<*(*(mat+2)) <<endl;//or mat[2][0]
//          *(*(mat+i)+j) == mat[i][j]
}
int main()
{
    int mat[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
    func(mat,4,4);  

    return 0;
}