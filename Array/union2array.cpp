
//without duplicates
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int arr[6] = {2,4,1,3,5,6};
    int brr[4] = {7,8,9,0};
    vector<int> crr;

    for(int i=0;i<6;i++)
    {
        crr.push_back(arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        crr.push_back(brr[i]);
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }

    return 0;
}