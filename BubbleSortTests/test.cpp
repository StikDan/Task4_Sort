#include "pch.h"
#include "sort.h"
#include <iostream>

auto sort = Sorts();

TEST(BubbleSortCase, ClassicSort) {

	const int size = 6;
	int ar[size]{ 2,1,7,5,4,3 };
	auto* p = ar;

	sort.Sort(p, size, true);

	int res[size]{ 1,2,3,4,5,7 };

	for (int element = 0; element < size; ++element)
	{
		EXPECT_EQ(ar[element], res[element]);
	}
}

TEST(BubbleSortCase, DescendingSort) {

	const int size = 5;
	int ar[size]{ 1,2,3,4,5 };
	auto* p = ar;

	sort.Sort(p, size, false);

	int res[size]{ 5,4,3,2,1 };

	for (int element = 0; element < size; ++element)
	{
		EXPECT_EQ(ar[element], res[element]);
	}
}

TEST(BubbleSortCase, BigSort) {

	const int size = 12;
	int ar[size]{ 56,23,43,65,1,2,3,0,86,4,5,6 };
	auto* p = ar;

	sort.Sort(p, size, true);

	int res[size]{ 0,1,2,3,4,5,6,23,43,56,65,86 };

	for (int element = 0; element < size; ++element)
	{
		EXPECT_EQ(ar[element], res[element]);
	}
}