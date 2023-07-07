// hollow full pyramid
// full pyramid
#include<iostream>
using namespace std;
int main()

{
    int num;
   
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        int k=0;
        for(int j=0;j<((2*num)-1);j++)
        {
            if(j<num-i-1){
                cout<<" ";
            }
            else if(k<2*i+1)
            {
                if(k==0||k==2*i||i==num-1)
                {
                     cout<<"*";
                }
               
                else{
                    cout<<" ";
                }
                k++;
            }

            
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}