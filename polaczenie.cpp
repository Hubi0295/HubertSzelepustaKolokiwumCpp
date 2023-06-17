#include "polaczenie.h"
Polaczenie *Polaczenie::jedynyobiekt= nullptr;
Polaczenie::Polaczenie() {

}
Polaczenie::Polaczenie(std::string podany_adres, int podany_port, int podany_timeout)
{
    adresIP=podany_adres;
    port=podany_port;
    timeout=podany_timeout;
}

Polaczenie *Polaczenie::singleton(std::string podany_adres, int podany_port, int podany_timeout) {
    if(jedynyobiekt== nullptr){
        jedynyobiekt = new Polaczenie(podany_adres,podany_port,podany_timeout);
    }
    return jedynyobiekt;
}
void Polaczenie::set_adres(std::string podany_adres)
{
    adresIP=podany_adres;
}

void Polaczenie::set_port(int podany_port)
{
    port=podany_port;
}

void Polaczenie::set_timeout(int podany_timeout)
{
    timeout=podany_timeout;
}

std::string Polaczenie::get_adres()
{
    return adresIP;
}

int Polaczenie::get_port()
{
    return port;
}

int Polaczenie::get_timeout()
{
    return timeout;
}
