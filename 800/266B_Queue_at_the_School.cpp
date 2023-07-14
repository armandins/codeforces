/* Arman Dindar Safa */ 

#include <iostream>
#include <string>

int main()
{
	int n, t;
	std::cin >> n >> t; 
	std::string s;
	std::cin >> s;
	// using a while loop to include timing in problem
	while(t != 0)
	{
		for (int i = 1; i < n; i++)
		{
			// swap places of G and B
			if (s[i-1] == 'B' && s[i] == 'G')
			{
				s[i-1] = 'G';
				s[i] = 'B';
				// move on
				i++;
			}
		}
		// decrement time and repeat till time equals zero
		t--;
	}

	std::cout << s;
	return 0;
}