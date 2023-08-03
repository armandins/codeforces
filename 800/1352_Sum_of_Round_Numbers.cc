// incomplete
#include <iostream>
using namespace std;

int main(){
	int N; 
	cin >> N;
	int cases[N];

	for (int i = 0; i < N; i++)
		cin >> i;

	for (int i = 0; i < N; i++)
	{
		while ( cases[i] % 10 > 9 ){
			cases[i] /= 10;
		}

		cout << cases[i] << "\n";
	} 


	return 0;
}