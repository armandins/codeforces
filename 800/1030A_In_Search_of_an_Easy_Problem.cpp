#include <iostream>

int main()
{
	int n {0};
	int i {0};
	std::cin >> n;

	while ( n > 0 )
	{
		std::cin >> i;
		if ( i == 1 ) 
			std::cout << "HARD";
	}

	n--;

	std::cout << "EASY";
}