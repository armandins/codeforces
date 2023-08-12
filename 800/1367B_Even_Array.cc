#include <iostream>
#include <vector>
using namespace std;

void solve(){
	int N;
	cin >> N;
	vector<int> A(N);

	for (auto &a : A)
		cin >> a;

	int wanteven = 0, wantodd = 0, fine = 0;

	for (int i = 0; i < N; i++){
		if (i % 2 == 0 && A[i] % 2 != 0)
			wanteven++;
		else if (i % 2 == 1 && A[i] % 2 == 0)
			wantodd++;
		else fine++;
	}

	int solve = min(wantodd, wanteven);

	if(fine == N) cout << '0' << '\n';
	else if ( wantodd != 0 || wanteven != 0 ) cout << solve << '\n';
	else if ( wantodd == wanteven) cout << wanteven << '\n';
	else cout << -1 << '\n';

}

int main(){
	int test;
	cin >> test;

	while (test-- > 0)
		solve();
}