#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	int N;
	cin >> N;

	vector<int> A(N);

	for (int &a : A)
		cin >> a;

	int maxSal = *max_element(A.begin(), A.end());
	int totA = accumulate(A.begin(), A.end(), 0);
	int totB = N * maxSal;

	cout << abs(totB - totA) << '\n'; 

}