#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "SearchEl1.h"
#include "SearchEl2.h"
#include "Negative.h"

template<class A>

void task_2(A* arr, int size)
{
	A sum = 0;
	int El1 = SearchEl1(arr, size);
	int El2 = SearchEl2(arr, size);

	if (Negative(arr, size, El1, El2) == true)
	{
		for (int i = El1 + 1; i < El2; i++)
		{
			sum += arr[i];

		}

		cout << "\nThe sum between " << El1 << " and " << El2 << " elements = " << sum << endl;
	}

	return;
}