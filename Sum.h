#pragma once

#include "Library.h"

template <class A>

A sum(int size, A* arr)
{
	A sume = 0;
	int i = 1;

	while (i < size)
	{
		sume = sume + arr[i];
		i += 2;
	}

	return sume;
}