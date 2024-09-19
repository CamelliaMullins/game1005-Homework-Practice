#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers{ 1, 2, 3 };

	for (int i = 0; i < 3000000; i++)
		numbers.push_back(i);

	for (int i = 0; i < 3000000; i++)
		std::cout << numbers[i] << std::endl;

	return 0;
}