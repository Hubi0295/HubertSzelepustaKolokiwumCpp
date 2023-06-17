#ifndef KWADRAT_H
#define KWADRAT_H
#include "trojkat.h"
#include "iostream"
#include <cmath>
class Kwadrat:public Trojkat{
public:
    int przekat;
public:
    Kwadrat(std::string podana,float pod, float wys,std::string typp, int przekatna);
    int PrzykladPolimorfizmuStatycznego(float podana_liczba);
};


#endif //KWADRAT_H
