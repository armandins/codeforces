#include <iostream>
// 1D problem --> x coordinate
// an example : if his friends house is at point x = 21 
// he needs to jump 4 times with magnitude of 5 
// and jump once more with magnitude of 1; which results in 5 jumps which is minimum.
// if x is greater than 5 and it's % is 0; you only need ( x / 5 number of jumps )
// but if it's greater than 5 and it's % isn't 0; you need ( x / 5 number of jumps + 1 )
// final case if x is samller than 5, you will only need one jump.
int main()
{	
	int x {0};
	std::cin >> x;
	
	if (x >= 5 && x % 5 != 0)
		std::cout << (x / 5) + 1 << std::endl;
	else if ( x < 5 )
		std::cout << "1" << std::endl;
	else std::cout << x/5 << std::endl;

	return 0; 
}