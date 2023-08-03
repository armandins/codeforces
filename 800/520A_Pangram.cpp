/* Arman Dindar Safa */

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int N;
	string S;
	cin >> N >> S;
	// convert string to uppercase letters
	transform(S.begin(), S.end(), S.begin(), ::toupper);
	// string to set func.
	set <char> strtoset (begin(S) , end(S));

	/*
	for (auto &x : strtoset)
		cout << x << " ";
	*/
	
	cout << (strtoset.size() == 26 ? "YES" : "NO");
}