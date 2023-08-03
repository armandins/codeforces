/* 
	Arman Dindar Safa 
		*/
#include <iostream>
#include <set>
using namespace std;

int main(){
	string S;
	getline(cin,S);
	//str to set
	set <char> strtoset (begin(S) + 1 , end(S) - 1);
	/*
	for (auto &x : strtoset)
		cout << x << " ";
	*/
	// size minus space char and , char only if we have more than two characters in a string
	/*
	if (strtoset.size() <= 1)
		cout << strtoset.size() << "\n";
	else{
		int64_t size = strtoset.size();
		cout << (size - 2) << "\n";
	}
	*/
	int64_t size = strtoset.size();
	cout << (size <= 1 ? size : (size - 2));
}