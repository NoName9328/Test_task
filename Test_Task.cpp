#include <vector>
#include <ctime> 
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
	
		clock_t start = clock();

		ParserTemplate parser(path);
		Person object = parser.getPersons();

		clock_t end = clock();

		double seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
		object.ShowPersons();

		std::cout <<"Runtime = " << seconds<<"s.";

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

