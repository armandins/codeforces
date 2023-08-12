/* Arman Dindar Safa */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
	int N = 3;
	vector<int> A(N);

	for (int &a : A)
		cin >> a;

	sort(A.begin(), A.end());

	cout << (A[0] + A[1] == A[2] ? "YES" : "NO") << '\n';

}

int main(){
	int N; 
	cin >> N;
	while (N-- > 0){
		solve();
	}
}