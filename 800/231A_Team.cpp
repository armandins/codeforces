//	input
//3
//1 1 0
//1 1 1
//1 0 0

//	output
//2


#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, count = 0;
	cin >> n;
	for ( int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		if ( a + b + c >= 2 ) 
		{
			count++;
		}
	}

	cout << count << endl;
}