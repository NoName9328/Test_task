#include "Person.h"

Person::Person(std::vector<Person> Persons)noexcept
{
	this->Persons = Persons;
}
void Person::ShowPersons() noexcept
{
	for (size_t i = 0; i < Persons.size(); i++)
	{
		std::cout << Persons[i];
	}
}
void Person::setDate(std::string Date) noexcept
{
	this->Month = Date;
}
void Person::setName(std::string Name) noexcept
{
	this->Name = Name;
}
void Person::setunknown(std::string unknown) noexcept
{
	this->unknown = unknown;
}
void Person::setTotal_Hourse(std::string Hourse) noexcept
{
	this->Total_Hourse = std::atoi(Hourse.c_str());
}
void Person::setE_mail(std::string E_mail) noexcept
{
	this->E_mail = E_mail;
}
void Person::setProject(std::string Project) noexcept
{
	this->Project = Project;
}
void Person::setEmployee(std::string Employee) noexcept
{
	this->Employee = Employee;
}
void Person::setDepartament(std::string Departament) noexcept
{
	this->Departament = Departament;
}
std::ostream& operator<<(std::ostream& out, Person p) noexcept
{
	out << "Name - " << p.getName() << '\n' << "Month - " << p.getMonth() << '\n' << "Total hours - " << p.getTotal_Hourse() << "\n\n";

	return out;
}
 std::string Person::getMonth()const noexcept
{
	 return  this->Month;
}
 int Person::getTotal_Hourse() const noexcept
{
	return this->Total_Hourse;
}
 std::string Person::getunknown()const noexcept
{
	return this->unknown;
}
 std::string Person::getName()const noexcept
{
	return this->Name;
}
 std::string Person::getE_mail()const noexcept
{
	return this->E_mail;
}
 std::string Person::getEmployee()const noexcept
{
	return this->Employee;
}
 std::string Person::getProject()const noexcept
{
	return this->Project;
}
 std::string Person::getDepartament()const noexcept
{
	return this->Departament;
}

