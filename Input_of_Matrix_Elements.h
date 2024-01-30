#pragma once

#include "Library.h"

template <class A>
void Input_of_Matrix_Elements(A** Array, int N)
{
	std::cout << "\n\nInput of matrix elements:";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << "\nEnter Array[" << i << "][" << j << "] element --> ";
			std::cin >> Array[i][j];
		}
	}

	return;
}