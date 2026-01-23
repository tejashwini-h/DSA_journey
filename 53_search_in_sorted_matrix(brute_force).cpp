// search for a key in row wise & col wise sorted matrix
// given : matrix will be sorted in row wise and column wise
// easy way : brute force approach
// traversing in the matrix , in search of element
// TC : bigO(n*m)
#include<iostream>
using namespace std;
void search(int a[][4],int n,int m)
{
    int key;
    cout<<"enter a key to search : ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == key)
            {
                cout<<"element found";
            }
           
        }
    }
}
int main()
{
    int a[4][4]={{10,20,30,40},{15,25,35,45},
                {27,29,37,48},{32,33,39,50}};
    search(a,4,4);
    return 0;
}

