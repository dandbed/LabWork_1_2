#pragma once

#include "Library.h"
template<class A>

void InsetArr(int size, A* arr)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	return;
}