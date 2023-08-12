/*
	Arman Dindar Safa 
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(){

	int count = 0;
	vector<int> A(4);

	for (int &a : A)
		cin >> a;

	for (int i = 0; i < 4; i++)
		if (A[i] > A[0])
			count++;

	cout << count << '\n';

}


int main(){

	int N;
	cin >> N;

	while (N-- > 0)
		solve();

}