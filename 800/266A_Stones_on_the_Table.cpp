#include <iostream>
#include <algorithm>


int min_removal(std::string f)
{
	int count {0};
	for (int i = 0; i < f.length() - 1; i++)		
		if (f[i] == f[i+1])
			count++;
	return count;
}

int main()
{	
	int tot;
	std::cin >> tot; 
	std::string s;
	std::cin >> s;
	int count {0};
	count = min_removal(s);
	std::cout << count <<std::endl;
	
}