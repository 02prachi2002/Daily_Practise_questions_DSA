//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter the number : ";
    cin>>n;
    int k=n;
    for(int row=0;row<n;row++)
    {
        int c=1;
       for(int col=0;col<k;col++)
       {
        if(col<n-row-1)
        {
            cout<<" ";
        }
        else if(col<=n-1)
        {
            cout<<c;
            c++;
        }
        else if(col==n)
        {
            c=c-2;
            cout<<c;
            c--;
        }
        else{
            cout<<c;
            c--;
        }
        
       }
         k++;
        
        cout<<endl;
    }
 
}