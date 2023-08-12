#include <iostream>
using namespace std;
int main(){
	int N; 
	cin >> N;

	if (N % 2 == 0) cout << 4 << " " << abs(N - 4) << '\n';
	else cout << 9 << " " << abs(N - 9) << '\n';

}