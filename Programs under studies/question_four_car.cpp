#include<iostream>
#include<string>

class Car {
private:

	int year;
	std::string company;
	std::string model;

public:
	void setCarInfo(int carYear,std::string companyName,std::string carModel)
	{
		year = carYear;
		company = companyName;
		model = carModel;
	}
	void getCarInfo()
	{
		std::cout << "Company......" << company << std::endl;
		std::cout << "Model........" << model << std::endl;
		std::cout << "Year..........." << year << std::endl;
	}
};
int main()
{
	int setYear = 0;
	std::string setModel;
	std::string setCompany;

	Car carOne;

	std::cout << "Insert the car propeties - (Company,Model,Year)\n\n";
	std::cin >> setYear >> setModel >> setCompany;

	carOne.setCarInfo(setYear,setCompany,setModel);
	carOne.getCarInfo();


	return 0;
}