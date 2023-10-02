//tobring allthe negative and positive to opposite side of the array
#include<iostream>
#include<vector>
using namespace std;

void rotatearray(int arr[], int size, int k)
{
   
    int ans[size];
    for(int i=0;i<size;i++)
    {
        int newindex = (i+k)%size;
        ans[newindex]= arr[i];
    }
    
   arr = ans;
}



int main()
{
    int size = 7;
    int arr[7] = {10,20,30,40,50,60};
    cout<<"enter the value of k";
    int k;
    cin>>k;
    rotatearray(arr,size, k);
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  } 

    return 0;
}