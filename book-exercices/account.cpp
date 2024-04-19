#include<iostream>

class Account{
public:
    
    Account(){}
    Account(std::string setName, double initialBalance) : name(setName) { 
            
            if (initialBalance > 0){ //Validation checking
               balance += initialBalance;
            }
   } 
   //This function that deposits the value to the balance 
   void deposit(double getAmmount)
   {
      if(getAmmount > 0){          //Validation checking
        balance += getAmmount;
      }
   }

   //This function sets the user name
   void setAccountName(std::string personName){
     name = personName;
   }

   //This function returns the balance account ammount is set to const to avoid modification on the object
   double getBalance()const{
       return balance;
   }
   //This function is set to 'constant' to avoid modification on the object
   std::string getAccountName()const{ 
        return name;
   }

private:
   std::string name;
   int balance{0};
};
double depositToAccount()
{

   double depoMoney;
   std::cout << "Deposit a ammount >>";
   std::cin >>depoMoney;
   std::cout <<"\nAdding: " << depoMoney;
   return depoMoney;

}
int main (int argv, char**argc)
{  
   Account accountOne("Daniel", 500);
   accountOne.deposit(depositToAccount());
   std::cout << "\n" << accountOne.getAccountName() << " has " << accountOne.getBalance()<<"\n";

   return 0;
}