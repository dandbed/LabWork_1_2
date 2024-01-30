#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "Sum.h"

template <class A>

void Test_1(A* arr, int size)
{
	int Quant = 0;
	A Sum = 0;
	int i = 1;

	if (size < 4)
	{
		cout << "Not enough elements in array" << endl;
	}

	else
	{
		Sum = sum(size, arr);
		Quant = quantity(size);

		cout << "Sum= " << Sum << endl;
		cout << "quantity = " << Quant << endl;

		while (i < size)
		{
			cout << "odd index " << i << endl;
			i += 2;
		}
	}

	return;
}