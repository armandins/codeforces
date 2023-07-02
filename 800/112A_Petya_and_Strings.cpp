#include <iostream>

int main()
{
	int result;
	std::string a,b;
	std::cin >> a >> b;

	//upper_to_lower_ASCII
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < 97)
			a[i] += 32;
		if (b[i] < 97)
			b[i] += 32;
	}

	for (int i = 0; i < a.size(); i++)
		if (a[i] > b[i] )
		{
			result = 1;
			break;
		}
		else if (a[i] < b[i])
		{
			result = -1;
			break;
		}

		std::cout << result << std::endl;

}