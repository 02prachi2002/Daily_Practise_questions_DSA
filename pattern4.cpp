// 0 1 2 3 4
// 5 6 7 8 9
// 10 11 12 13 14
// 15 16 17 18 19
// 20 21 22 23 24
#include<iostream>
using namespace std;
int main()

{
    int num, count=0;
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}