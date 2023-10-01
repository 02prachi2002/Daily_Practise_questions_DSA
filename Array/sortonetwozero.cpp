//to sort zeros one and twos
#include<iostream>
#include<vector>
using namespace std;

void sortpositivenegative(int arr[], int size)
{
    int index =0;
    int left =0;
    int right = size-1;
    int j=0;
    for(int i=0;i<size;i++)
    {
       if(arr[index]==0)
       {
        swap(arr[index],arr[left]);
        left++;
        index++;
       } 
       else if(arr[index]==2)
       {
        swap(arr[index], arr[right]);
        right--;
        //this is the point of error
        //here we should not have to do index++;
        //because hamme pata nahi hai ki jo number swap hoke aya hai vo kyun sa hai
        // so usse bhi check karna hai that is why inidex ko ++ nahi karenge
       }
       else{
        index++;
       }
       
    }
   
}
int main()
{
    int size = 10;
    int arr[10] = {1,0,2,2,1,0,0,1,0};
    sortpositivenegative(arr,size);
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  } 

    return 0;
}