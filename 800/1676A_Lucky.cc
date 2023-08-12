/*
	Arman Dindar Safa
		*/

#include <iostream>
#include <vector>
using namespace std;

void solve(){
	string S;
	cin >> S;

	int first = (S[0] - '0' )+ (S[1] - '0') + (S[2] - '0');
	int second = (S[3] - '0' )+ (S[4] - '0') + (S[5] - '0');
	
	cout << (first == second ? "YES" : "NO") << '\n';
}

int main(){
	int test;
	cin >> test;

	while (test-- > 0)
		solve();
}