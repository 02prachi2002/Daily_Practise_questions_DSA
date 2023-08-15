#include<iostream>
#include<vector>
using namespace std;


int main()
{
  vector<int> arr{1,2,3,3,4,6,8};
  vector<int> brr{3,3,4,10};
    vector<int> crr;
    for(int i=0 ;i<arr.size();i++)
    {
        int element = arr[i];
        for(int i =0;i<brr.size();i++)
        {
            if(element == brr[i])
            {
                brr[i] == -1;
                crr.push_back(element);
            }
        }
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr<<" ";
    }
    
    return 0;
}