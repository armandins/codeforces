/*
	Arman Dindar Safa 
*/
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void solve(){
	int N; 
	cin >> N;
	vector<int> A(N);

	for (auto &a : A)
		cin >> a;
	// for case ( 1 2 2 ...)
	if (A[0] != A[1] && A[0] != A[2]) cout << 1 << '\n';
	// for case ( 2 1 2 2 ...)
	else if (A[0] != A[1] && A[0] == A[2]) cout << 2 << '\n';
	// for case ( ... 1 1 1 2)
	else if (A[N - 1] != A[N - 2] && A[N - 1] != A[N - 3]) cout << N << '\n';
	// for case ( ... 1 1 2 1) 
	else if (A[N - 1] != A[N - 2] && A[N - 1] == A[N - 3]) cout << N - 1 << '\n';
	// otherwise, use a common key and output index (i + 1) if key doesn't match 
	// +1 is there since the indexing in question starts from 1 resulting in the indexing 1 2 3 .. and so on.
	else
	{
		auto common = A[0];
		for (int i = 0; i < N; i++)
		{
			if (A[i] != common)	cout << i + 1 << '\n';
		}
	}
}

int main(){
	int testCase;
	cin >> testCase;

	while(testCase-- > 0){
		solve();
	}
}