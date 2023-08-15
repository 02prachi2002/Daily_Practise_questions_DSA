#include<iostream>
using namespace std;
 
 int factorial(int n)
 {
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        
        fact = fact * i;

    }
    return fact;
 }

int main()
{
    int n=0;
    cout<<" enter the number :";
    cin>>n;
    int ans = factorial(n);
    cout<< ans;
    return 0;
}