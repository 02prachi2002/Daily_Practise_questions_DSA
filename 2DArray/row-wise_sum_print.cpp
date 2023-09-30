#include<iostream>
using namespace std;
void row_wise_sum(int arr[][4], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        int sum = 0;
        for(int j=0;j<col;j++)
        {
            sum = sum + arr[i][j];
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
   row_wise_sum(arr, row, col);

   
    return 0;
}