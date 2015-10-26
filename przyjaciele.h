#include <iostream>

using namespace std;

class Szachownica;

class Pion
{
   string kolor;
   int x,y;
   friend class Szachownica;									//zaprzyjaznienie

public:
	string a;
   Pion(string="bialy",int=0, int=0);
   void wczytaj();

   friend void sprawdz (Pion &pkt, Szachownica &p); 			//zaprzyjaünienie

};

class Szachownica
{
   string nazwa,kolorPiona;
   int szerokosc,wysokosc;

public:
   Szachownica(string="brak",int=1,int=1);
   void konwertuj(Pion a)
   {
   		kolorPiona = a.kolor;
   		cout<<"\n  Kolor piona zczytany przez Szachownice to: "<<kolorPiona;
   		
   }
   void wczytaj();

   friend void sprawdz (Pion &pkt, Szachownica &p);				//zaprzyjaünienie
};
