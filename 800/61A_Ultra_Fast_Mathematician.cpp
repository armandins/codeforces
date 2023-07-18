/* Arman Dindar Safa */ 

#include <iostream>
#include <string>

int main()
{
	// user input
	std::string str1, str2;
	std::cin >> str1 >> str2;

	// replace str1 with new characters looping through both strings
	for (int i = 0; i < str1.length(); i++)
		str1[i] == str2[i] ? str1[i] = '0' : str1[i] = '1';
		
	// print out the final form of str1
	std::cout << str1;
}
