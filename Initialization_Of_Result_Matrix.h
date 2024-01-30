#pragma once

#include "Library.h"

template <class A>
void Initialization_Of_Result_Martix(A* ResultMul, int n)
{
	for (int i = 0; i < n; i++)
	{
		ResultMul[i] = 1;
	}

	return;
}