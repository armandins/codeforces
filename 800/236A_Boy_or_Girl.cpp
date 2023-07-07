#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count = 0;

	sort(s.begin(),s.end());
	
	// unsorted : wjmzbmr
	// sorted : bjmmrwg
	
	for (int i = 0; i < s.length() - 1; i++)
		// s.length() - 1 since last element doesn't need applying loop to
		// it's distinct anyway.
		if(s[i] != s[i+1])
			count++;

	if (count % 2 == 0)
		cout << "IGNORE HIM!" << endl;
	else if (count % 2 == 1)
		cout << "CHAT WITH HER!" << endl;

}

