#include "sort.h"
#include <iostream>

int main()
{
	Sorts sort;

	const int size = 5;
	int ar[size]{ 1,2,3,4,5 };
	auto* p = ar;

	sort.Sort(p, size, false);

	for (int i = 0; i < size; ++i)
	{
		std::cout << p[i] << " ";
	}

	return 0;
}