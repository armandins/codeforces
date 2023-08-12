/* Arman Dindar Safa */

#include <iostream>
#include <string>
using namespace std;

int main(){
	string S, convS; 
	cin >> S;

	for (int i = 0; i < int(S.length()); i++){
		
		if ( S[i] == '-' && S[i + 1] == '.'){
			convS += '1';
			i++;
		}
		else if ( S[i] == '-' && S[i + 1] == '-'){
			convS += '2';
			i++;	
		}  
		else
		{
			convS += '0';
		} 
	}

	cout << convS << '\n';

}