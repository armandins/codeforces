/* Arman Dindar Safa */ 

#include <iostream>
#include <set>
#include <algorithm>

int main()
{
	int n {0};
	int temp1, temp2 {0};
	std::cin >> n;
	std::set<int> x;

	// take levels player #1 can pass
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp1;
		// store levels into set x;
		x.insert(temp1);
	}

	// take levels player #2 can pass
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> temp2;
		// store levels into set x;
		x.insert(temp2);
	}

	for (auto a : x)
	{
		std::cout << a << std::endl;
	}
	// if number of elements equals number of levels, they can pass all. 
	std::cout << ( x.size() >= n && *--x.end() != 0 ? "I become the guy." : "Oh, my keyboard!" ) << "\n";

}