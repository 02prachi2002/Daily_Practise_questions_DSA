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
            if(i==0 || j==0 ||j==num-i-1){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}