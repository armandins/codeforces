/* Arman Dindar Safa */ 

#include <iostream>

int main()
{
	int n {0};
	// n -> # of rooms 
	std::cin >> n;
	// p -> already living number of people
	// q -> i-th room's capacity
	int p, q, count {0};
	for (int i = 0; i < n; i++)
	{
		std::cin >> p >> q; 
		if ((q - p) >= 2 ) count++;
	}

	std::cout << count << std::endl;

}