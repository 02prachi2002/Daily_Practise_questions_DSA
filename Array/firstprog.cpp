#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int arr[10];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]*arr[i]<<" ";
    }

    return 0;
}
