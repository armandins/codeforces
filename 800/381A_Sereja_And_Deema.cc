/* 
	Arman Dindar Safa
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	// number of cards
	int N; 
	cin >> N;
	// store values of cards in A
	vector<long long> A(N);

	for (auto &a : A)
		cin >> a;

	// sort A ascending
	sort(A.begin(), A.end());

	// vectors B and C will store the values of cards picked by two friends
	vector<long long> B;
	vector<long long> C;

	// now let's push back every other element into emppty vectors;
	// index B: 0 2 4 6 ...
	// index C: 1 3 5 7 ...
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)	B.push_back(A[i]);
		else C.push_back(A[i]);
	}
	// sum of numbers in B and C using accumulate
	long long res1 = accumulate(B.begin(), B.end(), 0);	
	long long res2 = accumulate(C.begin(), C.end(), 0);
	// just to match the ouput formatting of the problem:
	if (res1 < res2) swap(res1, res2);

	// print final result
	cout << res1 << " " << res2 << '\n';
}