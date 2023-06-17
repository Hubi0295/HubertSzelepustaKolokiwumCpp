//
// Created by Daniel on 2023-06-17.
//
#include "kwadrat.h"
Kwadrat::Kwadrat(std::string podana,float pod, float wys,std::string typp, int przekatna): Trojkat(podana,pod,wys,typp) {
    przekat=przekatna;
}
int Kwadrat::PrzykladPolimorfizmuStatycznego(float podana_liczba){
    return get_wysokosc()/podana_liczba;
}