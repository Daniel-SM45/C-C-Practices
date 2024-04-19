#include <iostream>
#include <string>
#include "date.hxx"


//class implmentation
Date::Date (int cDay, int cMonth, int cYear) : day(cDay),month(cMonth),year(cYear){
    if (cMonth < 1 || cMonth > 12)
        month = 1;
};

//setters
int Date::setDay(int sDay)
{
    if ((sDay < 1) || (sDay > 31) || (sDay >  29))
         day = 1;
    else
     day = sDay;
     return day;
}
int Date::setMonth(int sMonth){
 if (sMonth < 1 || sMonth > 12)
     month = 1;
  else
     month = sMonth;
    return month;
}
int Date::setYear(int sYear){
  if(sYear < 1900 || sYear > 2099)
      year = 1999;
  else
     year = sYear;
   return year; 
}

//getters
int Date::getDay()const{return day;}
int Date::getMonth()const{return month;}
int Date::getYear()const{return year;}

