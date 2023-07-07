#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double n, m, a;
	cin >> n >> m >> a;

	long long first_line_flagstone = ceil( m / a );
	long long iteration_len = ceil ( n / a );

	long long result = first_line_flagstone * iteration_len;
	cout << result << endl;

}