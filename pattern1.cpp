// * * * *
// * * * *
// * * * *
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
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}