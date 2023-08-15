//printing full pyramid->then making it hollow
#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    
for(int row=0;row<n;row++)
    {
        for(int j=0;j<(row);j++)
        {
            cout<<" ";
        }
        for(int star=0;star>(n-row+1);star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    
    return 0;
}