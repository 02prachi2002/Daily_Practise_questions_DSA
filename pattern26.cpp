#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
       for(int col=1;col<row+2;col++)
       {
        if(col==1|| col==row+1 || row==n-1)
        {
            cout<<col<<" ";
        }
        else{
            cout<<"  ";
        }
        
       }
        
        cout<<endl;
    }
   
}