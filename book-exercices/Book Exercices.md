# Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings

1. 3.5 (Default Constructor) What’s a default constructor? How are an object’s data members initialized if a class has only a default constructor defined by the compiler?

R = Quando uma classe não possúi um construtor próprio, o construtor padrão não inicia as variáveis membros da classe que podem armazenar "lixo" de memória, sendo eles valores aleatórios.

2. 3.6 (Data Members) Explain the purpose of a data member.

R = As variáveis membros são os atributos da classe, elas são as caracteriasticas do objeto, a qual guardam suas propriedades.

3. 3.7 (Using a Class Without a using Directive) Explain how a program could use class string without inserting a using directive.

R = É preciso inserir o scopo especificador 'std::' para usar os componentes da classe string. Podemos inserir o _using namespae std;_ antes para que não seja necessário ter de semṕre usar o escopo especificador.

4. 3.8 (Set and Get Functions) Explain why a class might provide a set function and a get function for a data member.

R = As funções membros setters e getters servem para proteger e controlar o acesso às variáveis membros de uma classes dando mais segurança na proteção dos dados, robustez e usabilidade.

5. 3.9 (Modified Account Class) Modify class Account (Fig. 3.8) to provide a member function called withdraw that withdraws money from an Account . Ensure that the withdrawal amount does not exceed the Account ’s balance. If it does, the balance should be left unchanged and the member function should display a message indicating "Withdrawal amount exceeded account balance." Modify class AccountTest (Fig. 3.9) to test member function withdraw .

R =
# Account.h:

class Account{
   {...}
   double withdrawn(double withdrawAmmount)
   {
      if(withdrawAmmount > balance){
        std::cout << "\nWithdrawal amount exceeded account balance.";
      }
      else if (withdrawAmmount < 0){
          balance = balance;
          std::cout << "\nInvalid ammount!";

      }
      else{
         balance -= withdrawAmmount;
      }
      return balance;
   }
}

# AccountTest.cpp

int main()
{
    Account account1;

    account1.withdrawn();

    return 0;
}

6. (Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An Invoice should include four data members —a part number (type string ), a part description (type string ), a quantity of the item being purchased (type int ) and a priceper item (type int ). Your class should have a constructor that initializes the four data members. Provide a set and a get function for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not positive, it should be set to 0 . If the price per item is not positive, it should be set to 0 . Write a test program that demonstrates class Invoice ’s capabilities.

- Hardware Store Invoice;
- Quantity of items purchased;
- Price per item;
 
 R =

/* Question 6 - Chapter 3 Introduction to Classes, Objects, Member Functions and Strings*/

#include<iostream>
#include<string>

class Invoice{
public:
   
   Invoice(){};
   Invoice(std::string num, std::string desc,int quant,int unitPrice ):
   number(num),description(desc),quantityOfItems(quant),pricePerItem(unitPrice){

      if (quantityOfItems < 0){
          quantityOfItems = 0;
       }
      if (pricePerItem < 0){
          pricePerItem = 0;
       } 
   }

   std::string setNumber(std::string sNumber)
   {
        return number = sNumber;   
   }
   std::string setDescription(std::string sDescription)
   { 
        return description = sDescription;  
   }
   int setQuantityOfItem(int sQuantityOfItem)
   {    
     if (sQuantityOfItem < 0){
         quantityOfItems = 0;
     }
      return quantityOfItems = sQuantityOfItem;
   }
   int setUnitPrice(int sUnitPrice)
   {    
     if (sUnitPrice < 0){
        pricePerItem = 0;
     }
      return pricePerItem = sUnitPrice;  
   }  
   
   std::string getNumber()const{
      return number;
   }
   std::string getDescription()const{
      return description;
   }
   int getQuantityOfItems()const{
      return quantityOfItems;
   }
   int getUnitityPrice()const{
      return pricePerItem;
   }
   int getInvoiceAmount()const{
      return quantityOfItems * pricePerItem;
   }

private:
std::string number;
std::string description;
int quantityOfItems{0};
int pricePerItem{0};
};
void displayInvoiceInfo(Invoice* invoice)
{
  std::cout <<"Number.............."<<invoice->getNumber()<< "\n"
             <<"Description........"<<invoice->getDescription()<< "\n"
             <<"Quantity..........."<<invoice->getQuantityOfItems()<<"\n"
             <<"Price per item....."<<invoice->getUnitityPrice()<< "\n"
             <<"Invoice Ammount...."<<invoice->getInvoiceAmount() << "\n";

}
void getInvoiceInfo(Invoice* invoice)
{
     std::string invoiceNum;
     std::cout << "Number: ";
     std::cin >> invoiceNum;
     invoice->setNumber(invoiceNum);

     std::string invoiceDesc;
     std::cout << "Description: ";
     std::cin >> invoiceDesc;
     invoice->setDescription(invoiceDesc);

     int invoiceQuantity;
     std::cout << "Quantity: ";
     std::cin >> invoiceQuantity;
     invoice->setQuantityOfItem(invoiceQuantity);
     
     int invoicePricePerItem;
     std::cout << "Price per item:";
     std::cin >> invoicePricePerItem;
     invoice->setUnitPrice(invoicePricePerItem);
}
int main(int argv, char** argc)
{   
     Invoice invoiceOne;
     getInvoiceInfo(&invoiceOne);
     displayInvoiceInfo(&invoiceOne);
    return 0;
}

7. 3.11 ( Employee Class) Create a class called Employee that includes three pieces of information as data members—a first name(type string ), a last name (type string ) and a monthly salary (type int ). Your class should have a constructor that initializes the three data members. Provide a set and a get function for each data member. If the monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee ’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee ’s yearly salary again.

R = /* Question 7 - Chapter 3 Introduction to Classes, Objects, Member Functions and Strings*/
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

8 - 3.12 ( Date Class) Create a class called Date that includes three pieces of information as data members—a month (type int ), a day (type int ) and a year (type int ). Your class should have a constructor with three parameters that uses the parameters to initialize the three data members. For the purpose of this exercise, assume that the values provided for the year and day are correct, but ensure that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for each data member. Provide a member function displayDate that displays the month, day and year separated by forward slashes ( / ). Write a test program that demonstrates class Date ’s capabilities.