#include <iostream>
#include "przyjaciele.h"
using namespace std;

Pion::Pion(string n, int xx, int yy)
{
   kolor=n;
   x=xx;
   y=yy;
}

void Pion::wczytaj()
{
   cout<<"Kolor Piona: "; cin>>kolor;
   cout<<"Podaj wspolrzedne pionka...\n";
   cout<<"Podaj x: "; cin>>x;
   cout<<"Podaj y: "; cin>>y;
}

Szachownica::Szachownica(string n, int s, int w)
{
   nazwa = n;
   szerokosc=s;
   wysokosc=w;
}

void Szachownica::wczytaj()
{
   cout<<"Podaj nazwe Szachownicy: "; cin>>nazwa;
   cout<<"Podaj szerokosc szachownicy: "; cin>>szerokosc;
   cout<<"Podaj wysokosc szachownicy: "; cin>>wysokosc;

   cout<<endl<<"Nazwa obiektu: "<<nazwa;
}
//void Szachownica::konwertuj(Pion a)
//{
//	cout<<"Kolor piona: "<<kolorPiona;
//}
