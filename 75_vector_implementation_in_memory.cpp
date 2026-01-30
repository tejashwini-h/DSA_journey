// size => no. of elements in the vector
// capacity => max no. of elements that vector can hold
/* if the size of element id 4 and u want to add 5th element , thn space of vector in memory will be (4*2) =>8
so thn space will ne increased only when u want to add new element but u are already in the 'n'th  index */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>  vec ={1,2,3,4};// if we dont initialize any value , if it is empty thn the size and capacity are 0
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(5); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(6); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(7); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(8); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(9); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vec.push_back(10); // pushes the element at last of the vector
cout<<"size : "<<vec.size()<<endl;
cout<<"capacity : "<<vec.capacity()<<endl;

vector<int>  vec1 ;// if we dont initialize any value , if it is empty thn the size and capacity are 0
cout<<"size : "<<vec1.size()<<endl;
cout<<"capacity : "<<vec1.capacity()<<endl;

vec1.push_back(1);// if the vector is empty and we initialize one element thn it will be incremented by one , not (n*2)
cout<<"size : "<<vec1.size()<<endl;
cout<<"capacity : "<<vec1.capacity()<<endl;

 

return 0;
}