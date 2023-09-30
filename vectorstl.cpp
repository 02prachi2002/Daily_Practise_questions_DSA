#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>v){
    int size = v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }
}


int main()
{
vector<int>v;
//to insert in to the vector
// v.push_back(3);
// v.push_back(7);
// v.push_back(9);
// v.push_back(1);
// v.push_back(18);
// print(v);
// //to pop the elments out of vector
// v.pop_back();
// print(v);
//delete the last entered item
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int d;
    cin>>d;
   v.push_back(d);
}
print(v);
for(int i=0;i<10;i++)
{
    v.push_back(10);

}
print(v);
// to clear the vector
v.clear();
print(v);
//create array in vector
//initializing array
vector<int>arr;
//setting default values in array
vector<int>arr2(5,3);
print(v);
//after this we can also insert the values in it 
arr2.push_back(4);
//can also use for loop in it
print(v);
//also can use array in array 
vector<int>arr3(arr2);
print(v);
//can initialze array with default values dont woory about size it is extendable
vector<int>arr4={2,3,4,5,5,6,7,7};
print(v);

//vector can be of any datatype
vector<char>str1;
str1.push_back('a');
str1.push_back('d');
str1.push_back('g');
str1.push_back('h');
for(int i=0;i<4;i++)
{
    int c;
    cin>>c;
    str1.push_back(c);
}
 // to find the front index element
 str1[0];
 //another method
 str1.front();
 // to find the last index element
 str1.back();
 //another method
 str1[str1.size()-1];
 
    return 0;
}