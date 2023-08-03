#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	vector<int> X(3);
	
	for (int &x : X)
		cin >> x;

	sort(X.begin(), X.end());

	cout << ( X[2] - X[1] ) + ( X[1] - X[0] ) << '\n';
}