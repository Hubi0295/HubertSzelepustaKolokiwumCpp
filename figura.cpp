#include "figura.h"

Figura::Figura(std::string podana_nazwa)
{
    nazwa=podana_nazwa;
}

Figura::Figura()
{

}

std::string Figura::get_name() {
    return nazwa;
}

void Figura::setname(std::string podaj_nazme) {
    nazwa=podaj_nazme;
}