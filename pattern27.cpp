#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
       
       for(int col=row+1;col<n+1;col++)
       {
       
        if(col==row+1 || col== n || row==0 )
        {
              cout<<col<<"";
        }
        else{
            cout<<" ";
        }
    
        
       }
     
        
        cout<<endl;
    }
   
}