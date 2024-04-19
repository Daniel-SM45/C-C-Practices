#include<iostream>
 
enum Gender{ 
    male,
    female,    
};

int main (int argv, char ** argc)
{
     Gender getGender = female;

     if (getGender == male){
        std::cout << "Male\n";
     }
     else if ( getGender == female){
        std::cout << "Female\n"; 
     }

    return 0;
}