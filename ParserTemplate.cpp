#include "ParserTemplate.h"

ParserTemplate::ParserTemplate(std::string path) : path(path)
{
    FillBuffer();
    FillDetailsperson();
}

void ParserTemplate::FillBuffer()
{
    File.open(path);

    if (File.is_open())
    {
        std::string line;

        while (std::getline(File, line))
        {
            std::vector<char> row;

            for (char& c : line)
            {
                if (c != '\n')
                {
                    row.push_back(c);
                }
            }
            buffer.push_back(row);
        }
    }
    else
    {
        std::cout << "file opening is failed";

    }

    File.close();
}

void ParserTemplate::FillDetailsperson()
{
    Person PersonObject;
    std::string line;
    int pos = 0;

    for (size_t i = 0; i < buffer.size(); i++)
    {
        for (size_t j = 0; j < buffer[i].size(); j++)
        {
            if (buffer[i][j] != '"')
            {
                if (buffer[i][j] != ';')
                {
                    line = line + buffer[i][j];
                }
                else
                {
                    pos++;
                    switch (pos)
                    {
                    case 1:
                    {
                        PersonObject.setName(line);
                        line = "";
                        break;
                    }
                    case 2:
                    {
                        PersonObject.setE_mail(line);
                        line = "";
                        break;
                    }
                    case 3:
                    {
                        PersonObject.setDepartament(line);
                        line = "";
                        break;
                    }
                    case 4:
                    {
                        PersonObject.setEmployee(line);
                        line = "";
                        break;
                    }
                    case 5:
                    {
                        PersonObject.setProject(line);
                        line = "";
                        break;
                    }
                    case 6:
                    {
                        PersonObject.setunknown(line);
                        line = "";
                        break;
                    }
                    case 7:
                    {
                        PersonObject.setDate(line);
                        line = "";
                        break;
                    }
                    case 8:
                    {
                        PersonObject.setTotal_Hourse(line);
                        line = "";
                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }
                }
            }
        }
        bufferPersons.push_back(PersonObject);
        pos = 0;
    }
}

Person ParserTemplate::getPersons()
{
    return this->bufferPersons;
}

