/* Arman Dindar Safa */
#include <iostream>

long long series(long long A)
{
	if (A % 2 == 0 && A != 0)
		return (A / 2);
	else return -((A / 2) + 1);
}

int main()
{
	long long n;
	std::cin >> n;
	std::cout << series(n) << std::endl;
}