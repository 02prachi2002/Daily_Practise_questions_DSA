#include<iostream>
using namespace std;
void daigonal_sum(int arr[][4], int row, int col)
{
    int sum = 0;
    for(int i=0;i<row;i++)
    {
                sum = sum + arr[i][i];
            }
        
        cout<< sum << endl;
    
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
   daigonal_sum(arr, row, col);

    return 0;
}