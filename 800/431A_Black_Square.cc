/* 
	Arman Dindar Safa 
		*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	const int N = 4;
	vector<int> A(N);

	for (auto &a : A)
		cin >> a;

	int count = 0;
	
	string S;
	cin >> S;

	for (int j = 0; j < int(S.length()); j++){
		if (S[j] == '1')
			count += A[0];
		else if (S[j] == '2')
			count += A[1];
		else if (S[j] == '3')
			count += A[2];
		else count += A[3];
	}

	cout << count << '\n';
}