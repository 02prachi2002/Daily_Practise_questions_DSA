#include<iostream>
#include<vector>
using namespace std;
 


int main()
{
    vector<int> arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    //insert an element
    arr.push_back(3);
     arr.push_back(5);
      arr.push_back(7);
       arr.push_back(31);
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i];
        arr.pop_back();
    }


    //agar kisi vector mai explicitly size mention karte hai then usmai size and capacity ki value equal hote hai
     vector<int> brr(10);
      cout<<brr.size()<<endl;
      //10
    cout<<brr.capacity()<<endl;
    //10
 vector<int> crr{1,2,3,4,5,6};

   
    return 0;
}