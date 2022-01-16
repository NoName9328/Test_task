#pragma once

#include <iostream>
#include <vector>

class Person
{
private:

	int Total_Hourse;
	std::string Name;
	std::string unknown;
	std::string Month;
	std::string E_mail;
	std::string Project;
	std::string Employee;
	std::string Departament;
	std::vector<Person> Persons;

public:
	Person() = default;
	Person(std::vector<Person> Persons);

	void ShowPersons();

	void setDate(std::string Date);
	void setName(std::string Name);
	void setunknown(std::string BRED);
	void setE_mail(std::string E_mail);
	void setProject(std::string Project);
	void setEmployee(std::string Employee);
	void setTotal_Hourse(std::string Hourse);
	void setDepartament(std::string Departament);

	friend std::ostream& operator<<(std::ostream& out, Person p);

	int getTotal_Hourse();
	std::string getName();
	std::string getMonth();
	std::string getE_mail();
	std::string getProject();
	std::string getunknown();
	std::string getEmployee();
	std::string getDepartament();
};

