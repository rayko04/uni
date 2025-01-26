#include <iostream>

int getSum(int z)
{
	int sum1 = z + 2;
	int sum2 = z + 3;

	return (true ? sum1 : sum2); 
}

int main()
{
	int x = 0;
	int y = 9;

	int z = getSum((x > y) ? x : y);

	std::cout << z << std::endl;

	return 0;
}
