#include <iostream>
#include <string>

int main()
{
	std::string n;
	std::cin >> n;

	int len = n.length();

	while (len > 0)
	{
		while ( len % 2 == 1)
		{
			n.append("I hate that ");

		while (len % 2 == 0)
		{
			n. append("I love that ");
		}

		}
	len--;
	} 
	
	std::cout << n;
}
