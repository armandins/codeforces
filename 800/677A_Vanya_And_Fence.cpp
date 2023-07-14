/* Arman Dindar Safa
	Keep my name here if you are willing to use the solution */
#include <iostream>

int main()
{
// n -> # of people
// h -> fence height
// ih -> individual height
// count -> total width
int n, h, ih, width {0};
std::cin >> n >> h;
// receive height of each individual and save it as ih
for (int i = 0; i < n; i++)
{
	std::cin >> ih; 
	if (ih > h) width += 2;
		else width++;
}

std::cout << width << std::endl;

return 0;

}