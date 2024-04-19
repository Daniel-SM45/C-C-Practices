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
void setInvoiceInfo(Invoice* invoice)
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
void displayInvoiceInfo(Invoice* invoice)
{
  std::cout <<"Number.............."<<invoice->getNumber()<< "\n"
             <<"Description........"<<invoice->getDescription()<< "\n"
             <<"Quantity..........."<<invoice->getQuantityOfItems()<<"\n"
             <<"Price per item..... $"<<invoice->getUnitityPrice()<< "\n"
             <<"Invoice Ammount.... $"<<invoice->getInvoiceAmount() << "\n";
}
int main(int argv, char** argc)
{   
     Invoice invoiceOne;
     setInvoiceInfo(&invoiceOne);
     displayInvoiceInfo(&invoiceOne);

    return 0;
}