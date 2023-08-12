/* 
	Arman Dindar Safa
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	vector<int> A(N);

	for (auto &a : A)
		cin >> a;

	sort(A.begin(), A.end());

	for (int i = N - 1; i >= 0; i--){
		if (A[i] > abs(5 - K))
			A.pop_back();
	}

	cout << int(A.size()) / 3 <<'\n';

}