/* Arman Dindar Safa */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
	string S;
	cin >> S;
	transform(S.begin(), S.end(), S.begin(), ::toupper);

	cout << ( S == "YES" ? "YES" : "NO") << '\n';
}

int main(){
	int N;
	cin >> N;

	while (N-- > 0)
		solve();
}