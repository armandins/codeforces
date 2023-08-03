#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	int time = 0;

	std::vector<int> vec(n, 0);
	for (auto &x : vec)
		std::cin >> x; 

	auto maxim_index = std::max_element(vec.begin(), vec.end()) - vec.begin();
	auto minim_index = std::min_element(vec.begin(), vec.end()) - vec.begin();

	std::cout << maxim_index << " " << minim_index << std::endl;
	std::cout << "vec size : " << vec.size() << std::endl;
		while (maxim_index != 0)
		{
			std::swap(vec[maxim_index], vec[maxim_index - 1]);
			time++;
			std::cout << "Time loop: " << time << std::endl; 
		}

		while (minim_index != n - 1)
		{
			std::swap(vec[maxim_index], vec[maxim_index + 1]);
			time++;
		}

			std::cout << time;
	}	




