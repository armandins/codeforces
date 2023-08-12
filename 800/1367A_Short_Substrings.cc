#include <iostream>
#include <string>
using namespace std;

void run(){
	string S;
	cin >> S;
	// removing one of two back to back repeated elements
	for (int i = 1; i < int(S.length() - 1); i++){
		if(S[i] == S[i - 1])
			S.erase(i, 1);
	}

	cout << S << '\n';
}

int main(){
	int t; 
	cin >> t;
	while(t-- > 0){

		run();
	}

}