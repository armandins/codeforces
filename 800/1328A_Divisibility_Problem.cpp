/*
Arman Dindar Safa
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a, b, moves {0};
	
	while (n--)
	{
		cin >> a >> b;

		if (a % b == 0)
		{
			cout << 0 << "\n";
		}
		else 
		{
			int rem = a % b;
			moves = b - rem;
			cout << moves << "\n";
		}
	}
}