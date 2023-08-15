//hollow daimond
#include<iostream>
using namespace std;
int main()

{
    int num;
   
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int row=0;row<num;row++)
    {
        int start = row +1;
        for(int col=0; col<row+1;col++)
        {
            cout<<start <<" ";
            start++;
        }
        cout<<endl;
    }
    return 0;
}