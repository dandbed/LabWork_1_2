#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "DisplayPart_2.h"
#include "Initialization_Of_Result_Matrix.h"
#include "Count_Negative_Elements.h"

template <class A>
void Exercise_1_Part_2(A** Array, int n)
{
	if (n >= 2)
	{
		A* ResultMul = new A[n];

		std::cout << "Initial matrix:" << std::endl;

		DisplayPart_2(Array, n);
		Initialization_Of_Result_Martix(ResultMul, n);

		std::cout << "Result of work of the program:" << std::endl;

		for (int i = 0; i < n; i++)
		{
			int count = 0;

			count = Count_Negative_Elements(Array, ResultMul, n, i);

			if (count != n)
			{
				std::cout << "Line " << i << " :" << ResultMul[i] << std::endl;
			}

			else
			{
				std::cout << "There are no negative elements in the line '" << i << "'." << std::endl;
			}
		}

		delete[] ResultMul;
	}

	else
	{
		std::cout << "The size of matrix isn't correct for work with this exercise." << std::endl;
	}

	return;
}