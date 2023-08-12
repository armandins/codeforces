#include <iostream>
using namespace std;

int main(){
	int K, R; 
	cin >> K >> R; 
	int ctr {0};

	while(true){
		ctr++;

		if ((K * ctr) % 10 == 0 || (K * ctr) % 10 == R )
			break;

	}

	cout << ctr << '\n';
}