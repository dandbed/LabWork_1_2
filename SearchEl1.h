#pragma once

#include "Library.h"

template <class A>
int SearchEl1(A* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
}