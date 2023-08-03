#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	string s1, s2, s3;
	// accept string vals.
	cin >> s1 >> s2 >> s3;
	string sum = s1 + s2;
	// sort 3rd and sum of first two strings.
	sort(sum.begin(),sum.end());
	sort(s3.begin(),s3.end());
/*
	cout << sum << "\n";
	cout << s3 << "\n";
*/
	// if sorted sum string equals sorted 3rd string, it's a YES
	cout << (sum == s3 ? "YES" : "NO") << "\n";
}