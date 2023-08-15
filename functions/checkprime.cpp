#include<iostream>
#include<math.h>
using namespace std;

bool checkprime(int n)
{
    int remainder=0;
    //a number is prime which is only divisible by itself and one
    for (int i=2;i<=sqrt(n);i++)//sqrt (n) is more optimized
    {
        remainder = n % i;
        if(remainder == 0 )
         { 
          return false;
         }
          return true;
    }
     
}

int main()
{
    int n=0;
    cout<<" enter the number :";
    cin>>n;
     bool ans  = checkprime(n);
     if(checkprime)
     {
        cout<<" the number is prime ";
     }
     else{
        cout<< "the number is not prime";
     }
    return 0;
}