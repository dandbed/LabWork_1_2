#pragma once

#include "Library.h"

template <class A>
int Count_Negative_Elements(A** Array, A* ResultMul, int n, int i)
{
	int count = 0;

	for (int j = 0; j < n; j++)
	{
		ResultMul[i] *= Array[i][j];

		if (Array[i][j] >= 0)
		{
			count++;
		}
	}

	return count;
}