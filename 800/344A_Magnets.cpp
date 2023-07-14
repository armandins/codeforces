/* Arman Dindar Safa */ 

#include <iostream>
#include <vector>

int main()
{
	// n -> # of magnets
	int n {0};
	std::cin >> n;
	// pn -> plus-minus or minus-plus pos. vector for magnets
	int pn[100000];
	// grps -> number of groups in total
	int grps {0};

	// cin array elements ( placements of magnets )
	// (01/pn) or (10/np)
	for (int i = 0; i < n; i++)
	{	
		std::cin >> pn[i];
	}
	// iterate through the array to check back to back elements
	for (int j = 0; j < n; j++)
	{
		if (pn[j] != pn[j+1])
			grps++;
	}

	std::cout << grps << std::endl;

	// just in case : 
	//for (int k = 0; k < n; k++)
	//
	//	std::cout << "pn.at " << k <<" is: " << pn[k] << std::endl;
}