#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int testC; 
	int N; 
	int initArr[55];
	// number of test cases
	cin >> testC;

	while (testC--){
		
		cin >> N;
		// if exists only a single element in arr
		if (N == 1){

			cout << "YES" << '\n';
			continue;
		}	
		// take array elements from user
		for (int x = 0; x != N; x++)
			cin >> initArr[x];
		// sort array
		sort(initArr, initArr + N);

		vector<int> vec;
		int absDiff{0};
		// save difference of back to back elements into a new vec
		for (int x = 1; x != N; x++){
			absDiff = abs(initArr[x] - initArr[x-1]);
			vec.push_back(absDiff);
		}
		// sort the vec.
		sort(vec.begin(), vec.end(), greater<int>());
		// if possible, smallest element should be less or equal to one
		cout << ((vec[0] > 1) ? "NO" : "YES") << '\n';
	}

}