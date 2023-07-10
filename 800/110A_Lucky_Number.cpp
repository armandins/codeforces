/* Arman Dindar Safa */
// Please keep my name in here if you are willing to use the solution
#include <iostream>
#include <string>

int counter(long long a);
int main()
{
	long long n;
	int counted;
	std::cin >> n;
	//caling the function counter and assigning to an integer
	counted = counter(n);

	std::cout << ((counted == 7 || counted == 4) ? "YES" : "NO") << std::endl;
}

// introducing a function
// which converts the integer to a string
// and everytime it encounters the character '4' or '7'
// adds to the value of int count {0}
// and returns count in the end
int counter(long long a)
{
	int count {0};
	// convert a to string to_string function
	std::string str = std::to_string(a);
	// iterate through the string 
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == '7' || str.at(i) == '4')
		{
			count++;
		}
	}

	return count; 
}