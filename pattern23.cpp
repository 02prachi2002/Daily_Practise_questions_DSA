#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int col;
        for( col=1;col<row+2;col++)
        {
            cout<<char(col-1+'a');
        
        }
            col=col-2;
        for(;col>=1;col--)
        {
            cout<<char(col-1+'a');
        }
        
        cout<<endl;
    }
   
}