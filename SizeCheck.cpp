#include "Library.h"

int SizeCheck()
{
	bool SizeCheck = true;
	int N = 0;

	while (SizeCheck == true)
	{
		std::cout << "\nEnter the size of square matrix less than 50 -->";
		std::cin >> N;

		if (N <= 0 || N > 50)
		{
			std::cout << "\n\nError! The size of matrix is wrong.";
		}

		else
		{
			std::cout << "\n\nGreat. Size is correct.";
			SizeCheck = false;
		}
	}

	return N;
}