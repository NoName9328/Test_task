#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

class ParserTemplate
{
private:

	std::string path;
	std::ifstream File;
	std::vector<Person> bufferPersons;
	std::vector<std::vector<char>> buffer;

public:

	ParserTemplate(std::string path);
	void FillBuffer();
	void FillDetailsperson();
	Person getPersons();
};

