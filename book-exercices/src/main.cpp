#include<iostream>
#include<string>
#include"date.hxx"

void displayCalendar(int d, int m, int y)
{
   std::cout << "Date: " << d << "/" << m << "/ "<< y;  
}
int main (int argv, char** argc)
{
    Date calendar;
    displayCalendar(calendar.setDay(16), calendar.setMonth(03),calendar.setYear(2024));
    
    
    return 0;
}