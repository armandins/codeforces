/*
	Arman Dindar Safa 
		*/

#include <iostream>
using namespace std;

int main(){
	int N, M, C;
	// Mishras Count and Chris' Count 
	int Mcount, Ccount;
	cin >> N;

	while (N-- > 0){
		cin >> M >> C;
		if ( M > C ) Mcount++;
		else if ( M == C )
		{
			Mcount++;
			Ccount++;
		}
		else Ccount++;
	}

	cout << (Mcount > Ccount ? "Mishka" : (Mcount == Ccount ? "Friendship is magic!^^" : "Chris"));

}