/* Arman Dindar Safa 
	Keep my name in this file if you are willing to use the code below */

#include <iostream>
#include <string>

// func which reverses the string
void revstring(std::string& str);


int main()
{
	std::string inp;
	std::cin >> inp;
	std::string inp2;
	std::cin >> inp2;
	// reversing first input 
	revstring(inp);
	// if after reversing, both are the same -> print yes
	// if after reversing, both are not the same -> print no
	std::cout << ((std::string (inp) == std::string (inp2)) ? "YES" : "NO");
}


void revstring(std::string& str)
{
    int length = str.length();
    int n {length - 1};
    int i {0};
    while( i <= n )
    	{
        // Using the swap method to switch values 
        std::swap(str[i],str[n]);
        n--;
        i++;
		}
}