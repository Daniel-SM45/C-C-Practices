#ifndef DATE_H
#define DATE_H

class Date {
public:
  
  Date (){};
  Date (int, int, int){};

//Setters function members
int setDay(int);
int setMonth(int);
int setYear(int);

//Gettes function members
int getDay()const;
int getMonth()const;
int getYear()const;

private:
int day{0};
int month{0};
int year{0};
};

#endif

