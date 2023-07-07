#include <iostream>

int years(int a, int b)
{	
	int count {0};
	while ( b >= a)
	{
		a *= 3;
		b *= 2;
		count++;
	}
	return count;
}

int main()
{
	int a {0};
	int b {0};
	std::cin >> a >> b;

	int result = years(a,b);
	std::cout << result << std::endl;
}