// Problem summary: 
// if lower case letters are more than upper case letters in a string
// then convert it to all lowercase and vice versa.

#include <iostream>
#include <cstring>

// ask for a string from user
int main() {
	std::string s;
	std::cin>>s;

	// counting uppercase letters and lowercase letters
	// using is upper func
	int countupper {0};
	int countlower {0};
	for(int i=0; i < s.length(); i++){
	    if( isupper(s[i]))
	    {
	        countupper++;
	    }
	    else
	    {
	        countlower++;
	    }
	}
	// applying the problem summary above
	if( countupper > countlower)
	{
	    
	    char newchar;
	    for(int i=0; i < s.length(); i++){
	        newchar = toupper(s[i]);
	        std::cout<< newchar;
	    }
	}
	else
	{
	    char newchar;
	    for(int i=0; i < s.length(); i++){
	        newchar = tolower(s[i]);
	        std::cout << newchar;
	    }
	}
}