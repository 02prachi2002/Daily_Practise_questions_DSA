//tobring allthe negative and positive to opposite side of the array
#include<iostream>
#include<vector>
using namespace std;

void sortpositivenegative(int arr[], int size)
{
    int index =0;
    int j=0;
    for(int i=0;i<size;i++)
    {
        
        if(arr[i]<0)
        {
            swap(arr[index],arr[j]);
            index++;
            j++;
        }
        else{
            index++;
        }
    }
   
}



int main()
{
    int size = 7;
    int arr[7] = {23, -7, 12, -10 , -11, 40 , 60};
    sortpositivenegative(arr,size);
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  } 

    return 0;
}