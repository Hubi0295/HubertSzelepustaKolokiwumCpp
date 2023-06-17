#ifndef POLACZENIE_H
#define POLACZENIE_H
#include "string"

class Polaczenie
{
private:
    Polaczenie();
    Polaczenie(std::string podany_adres, int podany_port, int podany_timeout);
    static Polaczenie* jedynyobiekt;
    std::string adresIP;
    int port;
    int timeout;
public:
    static Polaczenie *singleton(std::string podany_adres, int podany_port, int podany_timeout);
    void set_adres(std::string podany_adres);
    void set_port(int podany_port);
    void set_timeout(int podany_timeout);
    std::string get_adres();
    int get_port();
    int get_timeout();
};
#endif // POLACZENIE_H
