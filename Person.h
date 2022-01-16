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
	Person(std::vector<Person> Persons)noexcept(true);
	void ShowPersons()noexcept(true);
	void setDate(std::string Date)noexcept(true);
	void setName(std::string Name)noexcept(true);
	void setE_mail(std::string E_mail)noexcept(true);
	void setunknown(std::string unknown)noexcept(true);
	void setProject(std::string Project)noexcept(true);
	void setEmployee(std::string Employee)noexcept(true);
	void setTotal_Hourse(std::string Hourse)noexcept(true);
	void setDepartament(std::string Departament)noexcept(true);

	friend std::ostream& operator<<(std::ostream& out, Person p)noexcept(true);

	int getTotal_Hourse()const noexcept(true);
	std::string getName()const noexcept(true);
	std::string getMonth()const noexcept(true);
	std::string getE_mail()const noexcept(true);
	std::string getProject()const noexcept(true);
	std::string getunknown()const noexcept(true);
	std::string getEmployee()const noexcept(true);
	std::string getDepartament()const noexcept(true);
};

