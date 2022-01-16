#include <vector>
#include <iostream>
#include "ParserTemplate.h"
#include "Person.h"

void menu()
{
	bool activate = true;
	while (activate != false)
	{
		char question;
		std::string path;

		std::cout << "\n\n\t\t\t\t Enter filename in the console, please(People.csv): ";
		std::cin >> path;
		std::cout << std::endl;

		ParserTemplate parser(path);
		Person object = parser.getPersons();

		object.ShowPersons();

		std::cout << "\n\n\t\t\t\t You want to read another file?(T/F): ";
		std::cin >> question;

		if (question == 'T')
		{
			system("cls");
			question = true;
			continue;
		}
		else
		{
			question = false;
			break;
			system("cls");
		}
	}
}

int main()
{
	menu();

	return 0;
}

