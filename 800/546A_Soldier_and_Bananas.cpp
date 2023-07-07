#include <iostream>

// k = cost of first banana
// n = initial amount of money the soldier has
// w = number of bananas he wants

// total cost = k + 2k + 3k + ... + wk
// total cost = k ( w * ( w+1 ) / 2 )

// a simple function that returns the total cost of bananas
int total(int k, int w)
{
	return 0.5*k*w*(w+1);
}

int main()
{
	int k, n, w; 
	std::cin >> k >> n >> w;
	// total cost of all bananas using total function
	int totalc = total(k, w);
	
	// if he already has enough to pay, he won't have to borrow any money from his friend
	
	//if (totalc <= n) 
	//	std::cout << "0" << std::endl;
	
	// otherwise, we negate the total cost of bananas from the money he already got 
	// to calculate how much he has to borrow ( totalc - n )
	
	//else std::cout << (totalc - n) << std::endl;
	std::cout <<  ((totalc <= n) ? 0 : (totalc - n))  << std::endl; 
}
