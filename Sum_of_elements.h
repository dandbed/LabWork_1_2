#pragma once

#include "Library.h"

template <class A>
A Sum_Of_Elements(int j, int i, A** Array, int n)
{
	A Sum = 0;

	while ((j < n) && (i < n))
	{
		Sum += Array[i][j];
		j++;
		i++;
	}

	return Sum;
}
