//hollow daimond
#include<iostream>
using namespace std;
int main()

{
    int num,n;
   
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
         n = num +1;
        for(int j=0; j<num+1;j++)
        {
            cout<<n <<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}