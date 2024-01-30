#include "Library.h"

char Select_of_Data_type()
{
	char Type = 0;
	bool Select = true;
	while (Select == true)
	{
		cout << "\n	Press '1' to choose 'int' data type" <<
			"\n		Press '2' to choose 'float' data type" <<
			"\n		Press '3' to choose 'double' data type" << endl;

		cin >> Type;

		if ((Type != '1') && (Type != '2') && (Type != '3'))
		{
			cout << "Error! You press wrong button." << endl;
		}
		else
		{
			Select = false;
		}
	}

	return Type;
}