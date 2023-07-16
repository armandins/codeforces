/* Arman Dindar Safa */ 

#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	// # of drinks
	int n; 
	std::cin >> n;
	// vector perc to store percentages of drinks
	std::vector<double> perc(n);

	for (auto &x : perc)
		std::cin >> x;

	// 0.0 for vector of doubles
	// accumulate from numeric lib. calculates the sum of elements inside our vec. 
	double sum = accumulate(perc.begin(), perc.end(), 0.0); 
	
	// result == ( sum of elements / # of elements )
	std::cout << ( sum / n ) << std::endl;
}