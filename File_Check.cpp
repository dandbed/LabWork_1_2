#include "Library.h"
#include "Prototypes.h"

bool FileCheck(char* Array, int& N)
{
	std::ifstream file;
	char Select = 0;
	bool CorrectData = true;

	file.open("Text_File_1_2.txt");

	if (file.is_open())
	{
		std::cout << "File is open" << std::endl;

		while (!file.eof())
		{
			Array[N] = file.get();
			N++;
		}

		Array[N] = '\0';

		file.close();

		std::cout << "Is the data correct?" << std::endl;

		DisplayPart3(Array, N);

		std::cout << std::endl;

		CorrectData = DataCheck_Part_3(Array, N);

		if (CorrectData == true)
		{
			return true;
		}

		else
		{
			return false;
		}
	}
	else
	{
		std::cout << "File isn't open. Program can't complete task. Please, enter the changes in the file 'Text_File.txt'. You will be taken to the main menu." << std::endl;

		return false;
	}
}