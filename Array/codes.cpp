#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
	int ans = 0;

	for(int i=0; i<arr.size(); i++) {
		ans = ans ^ arr[i];
	}

	return ans;
}
void printArray(vector<int> arr) {
	for(auto i:arr) {
		cout << i << " ";
	}
	cout << endl;
}
int main() {

	



	//INTERSECTION

	// vector<int> arr{1,2,3,3,4,6,8};
	// vector<int> brr{3,3,4,10};

	// vector<int> ans ;

	// //outer loop on arr vector
	// for(int i=0; i<arr.size(); i++) {
		
	// 	int element = arr[i];
	// 	// for every element, run loop on brr
	// 	for(int j=0; j<brr.size(); j++) {
	// 		if(element == brr[j]) {
	// 			//mark 
	// 			brr[j] = -1;
	// 			ans.push_back(element);
	// 		}
	// 	}
	// }

	// //print ans 
	// for(auto value: ans) {
	// 	cout << value << " ";
	// }

	// cout << endl;


	//Pair Sum
	// vector<int> arr{10,20,40,60,70};
	// int sum = 80;

	// //print all pairs
	// //outer loop will traverse for each element
	// for(int i=0; i<arr.size(); i++) {
	// 	int element = arr[i] ;

	// 	//for every element, will traverse on aage wale elements
	// 	for(int j=i+1; j<arr.size(); j++) {
	// 		if(element + arr[j] == sum ){
	// 			cout << "Pair FOund " << element <<"," << arr[j] << endl;
	// 		}
	// 	}

	// }

	//TRIPLET 

	// vector<int> arr{10,20,30,40};
	// int sum = 80;

	// for(int i=0; i<arr.size(); i++) {
	// 	int element1 = arr[i];

	// 	for(int j=i+1; j<arr.size(); j++) {
	// 		int element2 = arr[j];

	// 		for(int k=j+1; k<arr.size(); k++) {
	// 			int element3 = arr[k];

	// 			if(element1 + element2 + element3 == sum) {
	// 				cout << element1 <<","<< element2 <<","<< element3 << endl;
	// 			}
	// 		}
	// 	}
	// }


	//srot 0 and 1s

	vector<int> arr{0,1,0,1,1,0,1,0,1,1};
	int start = 0;
	int end = arr.size() -1;
	int i = 0;

	while( i != end) {
		cout << "for i="<<i<< " start="<<start <<" end="<< end << endl;
		if(arr[i] == 0) {
			cout << "found zero" << endl;
			cout <<"before swap ";
			printArray(arr);
			
			swap(arr[start], arr[i]);
			cout <<"after  swap ";
			printArray(arr);
			start++;
			i++;
			cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;
		}
		else {
			cout << "found One" << endl;
			cout <<"before swap ";
			printArray(arr);
			swap(arr[end], arr[i]);
			cout <<"after  swap ";
			printArray(arr);
			end--;
						cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;

		}
	}
	
	//print
	for(auto val : arr) {
		cout << val << " ";
	}
	
	
	
	
	return 0;
}