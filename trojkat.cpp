#include "trojkat.h"
#include "iostream"
using namespace std;
Trojkat::Trojkat() {

}
Trojkat::Trojkat(std::string podana_nazwa,float podana_podstawa, float podana_wysokosc, std::string podany_typ):Figura(podana_nazwa)
{
    dlugosc_podstawy=podana_podstawa;
    dlugosc_wysokosci=podana_wysokosc;
    typ_trojkata=podany_typ;
}


void Trojkat::set_podstawa(float podana_podstawa)
{
    dlugosc_podstawy=podana_podstawa;
}

void Trojkat::set_wysokosc(float podana_wysokosc)
{
    dlugosc_wysokosci=podana_wysokosc;
}

void Trojkat::set_typ(std::string podany_typ)
{
    typ_trojkata=podany_typ;
}

float Trojkat::get_podstawa()
{
    return dlugosc_podstawy;
}

float Trojkat::get_wysokosc()
{
    return dlugosc_wysokosci;
}

std::string Trojkat::get_typ()
{
    return typ_trojkata;
}

float Trojkat::oblicz_pole()
{
    return (dlugosc_podstawy*dlugosc_wysokosci)/2;
}

void Trojkat::pokaz_trojkat()
{
    cout<<"nazwa: "<<this->get_name()<<endl;
        cout<<"podstawa "<<dlugosc_podstawy<<endl;
            cout<<"wysokosc: "<<dlugosc_wysokosci<<endl;
                cout<<"typ: "<<typ_trojkata<<endl;
}
int Trojkat::PrzykladPolimorfizmuStatycznego(int podana_liczba) {
    return get_wysokosc()*podana_liczba;
}
