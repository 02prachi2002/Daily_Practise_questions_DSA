
// Z [ \ ]
// ^ _ ` a
// b c d e
// f g h i
#include<iostream>
using namespace std;
int main()

{
    int num;
    int count=90;
    cout<< "Enter the num of pattern you want:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<char(count)<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}