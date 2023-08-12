#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	const int MOD = 998244353;
	int N;
	int sum {0}; 
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);

	for (int &a : A)
		cin >> a;

	for (int &b : B)
		cin >> b;

	sort(A.begin(), A.end());
	sort(B.rbegin(), B.rend());

	for (int i = 0; i < N; i++)
	{
		A[i] %= MOD;
		sum = (sum + (A[i] * B[i])) % MOD;
	}

	cout << sum << '\n';
}
/// halfalfsalfsafsafasa