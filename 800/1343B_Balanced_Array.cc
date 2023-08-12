#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve(){
	int N; 
	cin >> N;
	vector<int> A(N/2);
	vector<int> B(N/2);

	if((N / 2) % 2 == 0){
		for (int i = 1; i < N / 2; i++){
			A[0] = 2;
			A[i] += 2;
		}
		for (int j = 1; j < N / 2 - 1; j++){
			B[0] = 1;
			B[j] += 2;
		}

		int sumA = accumulate(A.begin(), A.end(), 0);
		int sumB = accumulate(B.begin(), B.end(), 0);

		B.push_back(abs(sumA - sumB));

		A.insert(A.end(), B.begin(), B.end());

		cout << "YES" << '\n';

		for (int k = 0; k < N; k++)
			cout << A[k] << " ";
	}

	else cout << "NO" << '\n';




}

int main(){
	int N;
	cin >> N;

	while (N-- > 0)
		solve();
}