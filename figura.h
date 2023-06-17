#ifndef FIGURA_H
#define FIGURA_H
#include "string"
class Figura
{
private:
    std::string nazwa;
public:
    Figura();
    Figura(std::string podana_nazwa);
    std::string get_name();
    void setname(std::string podaj_nazme);
};

#endif // FIGURA_H
