#include <iostream>
#include "figura.h"
#include "trojkat.h"
#include "polaczenie.h"
#include "kwadrat.h"
using namespace std;
void funkcja(Trojkat *trojkat1, Trojkat *trojkat2);
int main()
{
    Figura nowa_figura("figurka");
    cout<<nowa_figura.get_name()<<endl;

    Trojkat nowy_trojkat("trojkat", 10,20,"ostrokatny");
    Trojkat nowy_trojkat2("trojkat2", 5,10,"ostrokatny");
    nowy_trojkat.setname("trojkacik");
    nowy_trojkat.set_podstawa(20);
    nowy_trojkat.set_wysokosc(30);
    nowy_trojkat.set_typ("rozwartokatny");
    nowy_trojkat.pokaz_trojkat();
    cout<<"pole: "<<nowy_trojkat.oblicz_pole()<<endl;
    cout<<endl;

    Polaczenie *nowe_polaczenie = Polaczenie::singleton("127.0.0.1",8000,1000);
    Polaczenie *nowe_polaczenie2 = Polaczenie::singleton("192.0.0.2",7000,1000);
    nowe_polaczenie->set_adres("127.0.0.1");
    nowe_polaczenie->set_port(8000);
    nowe_polaczenie->set_timeout(1000);
    cout<<"adres: "<<nowe_polaczenie->get_adres()<<endl;
    cout<<"port: "<<nowe_polaczenie->get_port()<<endl;
    cout<<"timeout: "<<nowe_polaczenie->get_timeout()<<endl;

    Trojkat *test1=&nowy_trojkat;
    Trojkat *test2=&nowy_trojkat2;
    funkcja(test1,test2);
    enum miasta{Krakow=10,Pozna=20,Warszawa=30,Bytom=40};
    cout<<miasta(Bytom);
    Kwadrat kwadrat("nowy",12.5,18.5,"prostokatny",1);
    cout<<"Wysokosc*10: " <<test1->PrzykladPolimorfizmuStatycznego(10)<<endl;
    cout<<"Wysokosc/10: "<<kwadrat.PrzykladPolimorfizmuStatycznego(10)<<endl;

    return 0;
}
void funkcja(Trojkat *trojkat1, Trojkat *trojkat2){
    if(trojkat1->oblicz_pole()>trojkat2->oblicz_pole()){
        cout<<"trojkat o nazwie: "<<trojkat1->get_name()<<" ma wieksze pole i jest typem: "<< trojkat1->get_typ()<<endl;
    }
    else if(trojkat1->oblicz_pole()<trojkat2->oblicz_pole()){
        cout<<"trojkat o nazwie: "<<trojkat2->get_name()<<" ma wieksze pole i jest typem: "<< trojkat2->get_typ()<<endl;
    }
    else{
        cout<<"Pola obu trojkatow sa rowne"<<endl;
    }

}
