// SortLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "sort.h"
#include <iostream>

// TODO: Это пример библиотечной функции.
void Sorts::Sort(int* p, int size, bool typeSort)
{	
	for (int i = 0; i < size - 1;)
	{
		if (typeSort == true)
		{
			if (p[i] > p[i + 1])
			{
				std::swap(p[i], p[i + 1]);
				i = 0;
			}
			else
				i++;
		}

		if (typeSort == false)
		{
			if (p[i + 1] > p[i])
			{
				std::swap(p[i], p[i + 1]);
				i = 0;
			}
			else
				i++;
		}
	}
}
