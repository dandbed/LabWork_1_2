#include "Library.h"
#include "Prototypes.h"

void Exercise_1_Part_3(char* Array, int n)
{
	int i = 0;
	int count = 0;
	std::cout << "Text file:" << std::endl;

	DisplayPart3(Array, n);

	std::cout << endl;
	std::cout << "Result of work of the program:" << std::endl;

	if ((Array[i] == 'E') || (Array[i] == 'e') || (Array[i] == 'Y') || (Array[i] == 'y') || (Array[i] == 'U') || (Array[i] == 'u') || (Array[i] == 'I') || (Array[i] == 'i') || (Array[i] == 'O') || (Array[i] == 'o') || (Array[i] == 'A') || (Array[i] == 'a'))
	{
		while (((Array[i] >= 'a') && (Array[i] <= 'z')) || ((Array[i] >= 'A') && (Array[i] <= 'Z')))
		{
			std::cout << Array[i];
			i++;
			count++;
		}
		std::cout << " ";
	}

	else
	{
		i++;
	}

	while (i <= n)
	{
		if ((Array[i - 1] < 'A') || ((Array[i - 1] > 'Z') && (Array[i - 1] < 'a')) || (Array[i - 1] > 'z'))
		{
			if ((Array[i] == 'E') || (Array[i] == 'e') || (Array[i] == 'Y') || (Array[i] == 'y') || (Array[i] == 'U') || (Array[i] == 'u') || (Array[i] == 'I') || (Array[i] == 'i') || (Array[i] == 'O') || (Array[i] == 'o') || (Array[i] == 'A') || (Array[i] == 'a'))
			{
				while (((Array[i] >= 'A') && (Array[i] <= 'Z')) || ((Array[i] >= 'a') && (Array[i] <= 'z')))
				{
					std::cout << Array[i];
					i++;
				}
				std::cout << " ";
			}
		}

		i++;
	}

	if (count == 0)
	{
		cout << "There are no words starting with letters 'a', 'o', 'e', 'y', 'u', 'i'.";
	}

	std::cout << std::endl;

	return;
}