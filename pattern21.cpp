#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
         for(int j=0;j<(n-row-1);j++)
        {
            cout<<" ";
        }
        for( int j=0;j<(row+1);j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }


    for(int row=0;row<n;row++)
    {
         for (int space =0;space<row;space++)
        {
            cout<<" ";
        }
        for (int star = 0; star<n-row;star++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
        // spaces
       
    }
   
