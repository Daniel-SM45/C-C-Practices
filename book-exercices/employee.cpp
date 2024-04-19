/* Question 7 - Chapter 3 Introduction to Classes, Objects, Member Functions and Strings*/
#include<iostream>

class Employee{
public:
    Employee(){}
    Employee(std::string iniName,std::string iniLastName, int iniMontlhySalary):name(iniName),lastName(iniLastName),montlhySalary(iniMontlhySalary){
        if(iniMontlhySalary < 0){
           montlhySalary = 0;
        }
    }
    //setters members
    std::string setName(std::string sName)
    {
        return name = sName;
    }
    std::string setLastName(std::string sLastName)
    {
        return lastName = sLastName;
    }
    int setMonthlySalary(int sMonthlySalary)
    {  
        if (sMonthlySalary < 0){
            montlhySalary = 0;
        }
        else{
            montlhySalary = sMonthlySalary;
        }
        return montlhySalary;

    }
    //getters members
    std::string getName()const{
        return name;
    }
    std::string getLastName()const{
        return lastName;
    }
    int getMonthlySalary()const{
        return montlhySalary;
    }

private:
std::string name;
std::string lastName;
int montlhySalary{0};

};
void setEmployeeData(Employee* employeeData, std::string name, std::string lastName, int montlhySalary)
{   
    employeeData->setName(name);
    employeeData->setLastName(lastName);
    employeeData->setMonthlySalary(montlhySalary);
    
}
void displayEmployeeData(Employee* employeeInfo, int* yearSalary, int* bonus)
{   
    std::cout << "Name.................. "   << employeeInfo->getName()
              << "\nLast Name............. " << employeeInfo->getLastName()
              << "\nMonthly Salary........ $"<< employeeInfo->getMonthlySalary()
              << "\nYearly Salary......... $"<< *yearSalary
              << "\nBonus................. $"<< *bonus<< "\n\n";
}

int main (int argv, char** argc)
{
    Employee employeeOne;                                            //Create the first employee object

    setEmployeeData(&employeeOne,"Daniel","Amaral",8000);
    int yearlySalary = employeeOne.getMonthlySalary() * 12;          //Calculates the monthly salary by year
    int bonus = yearlySalary + (yearlySalary * 10);                  //Calaculates the yearly salary with 10 percent of bonus
    displayEmployeeData(&employeeOne,&yearlySalary,&bonus);

    Employee employeeTwo;                                            //Create the second employee object
    
    setEmployeeData(&employeeTwo,"Harry","Cross",6000);
    int yearlySalaryTwo = employeeTwo.getMonthlySalary() * 12;       //Calculates the monthly salary by year
    int bonusTwo = yearlySalaryTwo + (yearlySalaryTwo * 10);         //Calaculates the yearly salary with 10 percent of bonus
    displayEmployeeData(&employeeTwo, &yearlySalaryTwo, &bonusTwo);

    return 0;
}