#include <iostream>
#include <iomanip>    // for setw and setfill manipulators
#include <stdexcept>  // for invalid_argument exception class 
#include <sstream>    // for ostringstream class
#include <string>
#include "Time.h"     // Include the definition of class time


void Time::setTime(int h, int m, int s){
  if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
       
       hour = h;
       minutes = m;
       seconds = s;
  }
  else{
    throw std::invalid_argument("Hour, minutes and/or second was out of range");
  }
};

std::string Time::toUniversalString() const{
     
     std::ostringstream output;
     output << std::setfill('0') << std::setw(2) << hour << ":"
            << std::setw(2) << minutes << ":" << std::setw(2) << seconds;
            return output.str();
}      
std::string Time::toStandardString() const{

   std::ostringstream output;
   output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
          << std::setfill('0') << std::setw(2) << minutes << ":" << std::setw(2)
          << seconds << (hour < 12 ? " AM" : " PM");
          return output.str();
}
