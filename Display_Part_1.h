#pragma once

#include "Library.h"

template <class A>

void DisplayPart_1(A* Array, int n)
{
	std::cout << "\nSize of matrix= " << n << "\nElements of matrix:" << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << *(Array + i) << " ";
		std::cout << std::endl;
	}

	return;
}