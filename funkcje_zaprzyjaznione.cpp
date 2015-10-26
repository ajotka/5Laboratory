#include <iostream>
#include "przyjaciele.h"
using namespace std;

void sprawdz(Pion &pkt,Szachownica &p)
{

if((pkt.x>=0)&&(pkt.x<=p.szerokosc)&&(pkt.y>=0)&&(pkt.y<=p.wysokosc))

cout<<endl<<"Pion "<<pkt.kolor<<" nalezy do szachownicy o nazwie "<<p.nazwa;

else

cout<<endl<<"Pion "<<pkt.kolor<<" lezy POZA szachownica o nazwie "<<p.nazwa;


}

int main()
{
    Pion pkt1("bialy",0,0);    
	pkt1.wczytaj();

    Szachownica p1("Szachownica",8,8);
    p1.wczytaj();


	p1.konwertuj(pkt1);
    sprawdz(pkt1,p1);

    return 0;
}

