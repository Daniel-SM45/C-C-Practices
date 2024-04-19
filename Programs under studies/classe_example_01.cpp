#include<stdlib.h>
#include<iostream>
#include<string>


class Employee {

	private:

		std::string name;
		std::string location;
		int salary;

	public:
		Employee(std::string n, std::string l, int employee_salary = 0)
		{
			name = n;
			location = l;
			salary = employee_salary;
		}
		void set_name(std::string usr_name)
		{

			name = usr_name;
		}
		std::string get_name()
		{

			return name;
		}


		void print_info()
		{
			std::cout <<"Name: " << name << "\n";
			std::cout <<"Location: " << location <<"\n";
			std::cout <<"Salary: " << salary << "\n";

		}

};

struct company {

	double set_employee_salary;

} companyData;

int main()
{

	Employee user1("Daniel", "USA",companyData.set_employee_salary);
	user1.print_info();

	return 0;
}