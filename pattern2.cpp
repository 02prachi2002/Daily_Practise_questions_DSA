// 0 0 0 0 0 
// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
#include<iostream>
using namespace std;
int main()

{
    int num;
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}