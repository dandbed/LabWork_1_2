#pragma once

#include "Library.h"
#include "Prototypes.h"
#include "DisplayPart_2.h"

template <class A>
bool DataCheck_Part_2(A** Array, int n)
{
	bool CorrectDataCheck = true;
	char CorrectData = 0;

	while (CorrectDataCheck == true)
	{
		std::cout << "\n\nIs the data correct?";

		DisplayPart_2(Array, n);

		std::cout << "\n\nPress button 'y' or 'Y' if data is correct" << "\nPress button 'n' or 'N' if data isn't correct" << std::endl;
		std::cin >> CorrectData;

		if (CorrectData == 'y' || CorrectData == 'Y')
		{
			std::cout << "\nGreat.";
			CorrectDataCheck = false;

			return false;
		}

		else
		{
			if (CorrectData == 'n' || CorrectData == 'N')
			{
				std::cout << "\nOK, repeat the input of size of matrix and elements of matrix";
				CorrectDataCheck = false;
			}

			else
			{
				std::cout << "\nError!You press wrong button.";
			}
		}
	}

	return true;
}