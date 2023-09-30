#include<iostream>
using namespace std;
void col_wise_sum(int arr[][4], int row, int col)
{
    for(int i=0;i<col;i++)
    {
        int sum = 0;
        for(int j=0;j<row;j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main()
{
  int arr[4][4] = {
          {1,2,3,4},
          {5,6,70,8},
          {9,10,1,11},
         {12,24,46,89}
          };
   int row = 4;
   int col = 4;
   col_wise_sum(arr, row, col);

   
    return 0;
}