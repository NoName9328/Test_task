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
	void ShowPersons()noexcept(true);
	void setDate(std::string Date);
	void setName(std::string Name);
	void setE_mail(std::string E_mail);
	void setunknown(std::string unknown);
	void setProject(std::string Project);
	void setEmployee(std::string Employee);
	void setTotal_Hourse(std::string Hourse);
	void setDepartament(std::string Departament);

	friend std::ostream& operator<<(std::ostream& out, Person p) noexcept(true);

	int getTotal_Hourse()const;
	std::string getName()const;
	std::string getMonth()const;
	std::string getE_mail()const;
	std::string getProject()const;
	std::string getunknown()const;
	std::string getEmployee()const;
	std::string getDepartament()const;
};

