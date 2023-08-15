//printing full pyramid->then making it hollow
#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    
for(int row=0;row<n;row++)
    {
        // int k=0;
        
        // for (int col=0;col<((2*row)-1);col++)
        // {
            
        //       if(col<n-row-1){
        //         cout<<" ";
        //       }
        //       else if( k <(2*row)+1){
        //         cout<<"*";
        //         k++;
        //       }
        //       else{
        //         cout<<" ";
        //       }
           
        // }

        for(int j=0;j<(n-row-1);j++)
        {
            cout<<" ";
        }
        for(int star=0;star<(row+1);star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    
    return 0;
}