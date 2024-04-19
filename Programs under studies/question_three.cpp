#include<iostream>
#include<string>

class Person {

	private:

		int age;
		std::string country;
		std::string name;

	public:

		void setPersonData(std::string perName, std::string perCountry, int perAge)
		{
			name = perName;
			country = perCountry;
			age = perAge;


		}
		void getPersonData()
		{
			std::cout << "Name......." << name << "\n";
			std::cout << "Country...." << country << "\n";
			std::cout << "Age........" << age;
		}
};

int main()
{
	
	int setUserAge;
	std::string setUserName;
	std::string setUserCountry;
	
	
	Person personOne;
	personOne.setPersonData();
	personOne.getPersonData();



	return 0;
}