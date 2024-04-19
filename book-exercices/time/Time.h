#include <string>

//Diretivas que previnem multiplas inclusões do header:
#ifndef TIME_H
#define TIME_H

//Definição da classe Time
class Time{
public:

void setTime(int, int, int);
std::string toUniversalString()const;
std::string toStandardString()const;

private:

unsigned int hour{0};
unsigned int minutes{0};
unsigned int seconds{0};

};

#endif 