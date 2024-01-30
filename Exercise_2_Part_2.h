#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "DisplayPart_2.h"
#include "Maximum_Sum.h"

template <class A>
void Exercise_2_Part_2(A** Array, int n)
{
	A MaxSum = 0;

	if (n >= 3)
	{
		std::cout << "Initial matrix:" << std::endl;

		DisplayPart_2(Array, n);

		MaxSum = Maximum_Sum(Array, n);

		std::cout << "The maximum sum of the elements of the diagonal parallel to the main one = " << MaxSum << std::endl;
	}

	else
	{
		std::cout << "The size of matrix isn't correct. The size cannot be less than 3." << std::endl;
	}

	return;
}