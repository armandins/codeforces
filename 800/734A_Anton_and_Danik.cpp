/* Arman Dindar Safa */ 
// Keep my name in here if you are willing to use the solution
#include <iostream>
#include <string>

int main()
{
	// n == number of characters in string
	int n {0};
	std::cin >> n;
	// s == winners string
	std::string s; 
	std::cin >> s;
	// antoncount == # of times anton won
	// danikcount == # of times danik won
	int antoncount {0};
	int danikcount {0};
	for (int i = 0; i < n; i++)
	{
		if (s.at(i) == 'A')
			antoncount++;
		else danikcount++;
	}
	// antoncount == danikcount -> Friendship
	// antoncount != danikcount :
	// antoncount > danikcount -> Anton
	// antoncount !> danikcount -> Danik
	std::cout << (antoncount == danikcount ? "Friendship" : (antoncount > danikcount ? "Anton" : "Danik"));

}