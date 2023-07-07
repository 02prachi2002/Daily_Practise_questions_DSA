// inverted full pyramid
#include<iostream>
using namespace std;
int main(void)
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        
        
        for(int j=0;j<i;j++)
        {
            
                cout<<" ";
        }
        for(int j=0;j<num-i;j++)
        {
            
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}