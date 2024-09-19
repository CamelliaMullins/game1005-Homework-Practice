#include <array>

void Change(std::array<int, 3> values)
{
	values[0] = 69;
}

int main()
{
	std::array<int, 3> values{ 1, 2, 3, };
	Change(values);
	return 0;
}