#pragma once

#include "Library.h"

template <class A>
A Comparison(A MaxSum, A MaxSumIntermediate)
{
	if (MaxSumIntermediate > MaxSum)
	{
		return MaxSumIntermediate;
	}

	else
	{
		return MaxSum;
	}
}