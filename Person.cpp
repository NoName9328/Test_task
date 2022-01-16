#include "Person.h"

Person::Person(std::vector<Person> Persons)
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
void Person::setDate(std::string Date) 
{
	this->Month = Date;
}
void Person::setName(std::string Name) 
{
	this->Name = Name;
}
void Person::setunknown(std::string unknown) 
{
	this->unknown = unknown;
}
void Person::setTotal_Hourse(std::string Hourse) 
{
	this->Total_Hourse = std::atoi(Hourse.c_str());
}
void Person::setE_mail(std::string E_mail) 
{
	this->E_mail = E_mail;
}
void Person::setProject(std::string Project)
{
	this->Project = Project;
}
void Person::setEmployee(std::string Employee)
{
	this->Employee = Employee;
}
void Person::setDepartament(std::string Departament) 
{
	this->Departament = Departament;
}
std::ostream& operator<<(std::ostream& out, Person p) noexcept
{
	out << "Name - " << p.getName() << '\n' << "Month - " << p.getMonth() << '\n' << "Total hours - " << p.getTotal_Hourse() << "\n\n";

	return out;
}
 std::string Person::getMonth()const 
{
	 return  this->Month;
}
 int Person::getTotal_Hourse() const 
{
	return this->Total_Hourse;
}
 std::string Person::getunknown()const 
{
	return this->unknown;
}
 std::string Person::getName()const 
{

	return this->Name;
}
 std::string Person::getE_mail()const
{
	return this->E_mail;
}
 std::string Person::getEmployee()const 
{
	return this->Employee;
}
 std::string Person::getProject()const 
{
	return this->Project;
}
 std::string Person::getDepartament()const 
{
	return this->Departament;
}

