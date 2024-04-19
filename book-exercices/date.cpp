#include<iostream>
#include <stdexcept>

class Date{
public:

Date(){}
Date (int iniDay, int iniMonth, int iniYear) : day(iniDay),month(iniMonth),year(iniYear){  
    if(iniMonth < 1 || iniMonth > 12){
       month = 1;
    }      
}
//Setters
int setDay(int sDay){
    if ( ((sDay < 1) || (sDay > 31)) || ((sDay > 28) || (sDay < 29)) )
        day = 1;
    else
        day = sDay;
    return day;
}
int setMonth(int sMonth)
{
    if((sMonth < 1) || (sMonth > 12))
       month = 1;
    else
       month = sMonth;    
   return month;
}
int setYear(int sYear){
    if ((sYear < 1900) || (sYear > 2099))
        year = 2024;
    else
        year = sYear;
    return year;
}
//Getters
int getDay()const{
    return day;
}
int getMonth()const{
    return month;
}
int getYear()const{
    return year;
}

private:
int day{0};
int month{0};
int year{0};
};

void displayDate(int day, int month, int year){
    std::cout << day << "/" << month << "/" << year << "\n";
}
int main (int argv, char** argc){

   Date dateOne;
   displayDate(dateOne.setDay(30),dateOne.setMonth(02),dateOne.setYear(2024));

   return 0;
}