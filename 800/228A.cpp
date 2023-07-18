#include <iostream>
#include <algorithm>

int main()
{
    int n {4};
    int count {0};
    long long int colors[20];

    for(int i = 0; i < n; i++)
        std::cin >> colors[i];
    
    std::sort(colors, colors + n);
    
    for(int i = 0; i < n; i++)
        if(colors[i] == colors[i+1])
            count++;

    std::cout << count << std::endl;

}