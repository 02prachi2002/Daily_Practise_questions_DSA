// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****

#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //half pyramid
       for(int col=0;col<n-row;col++)
       {
        cout<<"*";
       }
       //full pyramid space
       for(int col=0; col<row+1;col++)
       {
        cout<<"  ";
       }

        for(int col=0;col<n-row;col++)
       {
        cout<<"*";
       }
      
        // 
        
        cout<<endl;
    }
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }

        for(int col=0; col<n-row;col++)
       {
        cout<<"  ";
       }


        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
}