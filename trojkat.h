#ifndef TROJKAT_H
#define TROJKAT_H
#include "string"
#include "figura.h"
class Trojkat: public Figura
{
private:
    float dlugosc_podstawy;
    float dlugosc_wysokosci;
    std::string typ_trojkata;
public:
    Trojkat();
    Trojkat(std::string nazwa,float podana_podstawa, float podana_wysokosc, std::string podany_typ);
    void set_podstawa(float podana_podstawa);
    void set_wysokosc(float podana_wysokosc);
    void set_typ(std::string podany_typ);
    float get_podstawa();
    float get_wysokosc();
    std::string get_typ();
    float oblicz_pole();
    void pokaz_trojkat();
    int PrzykladPolimorfizmuStatycznego(int podana_liczba);

};

#endif // TROJKAT_H
