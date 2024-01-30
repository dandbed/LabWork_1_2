#pragma once

#include "Library.h"

template <class A>

int Size_of_Array(A* arr, int size)
{
	int new_size = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			new_size++;
		}
	}

	return new_size;
}