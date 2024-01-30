#pragma once

#include "Library.h"

template<class A>

A* create_of_new_arr(A* arr, int size, int new_size)
{
	int j = 0;
	A* TempArr = new A[new_size];

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			if (j < new_size)
			{
				*(TempArr + j) = arr[i];
				j++;
			}
		}
	}

	return TempArr;
}