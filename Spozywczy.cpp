#include <iostream>
#include <string>
#include <fstream>
#include "Spozywczy.h"

using namespace std;

int Spozywczy::ileObiektow = 0;
string nazwa_pliku_txt = "spozywczy.txt";

Spozywczy::Spozywczy()
{
	DEBUG_LOG("Domyslny Konstruktor Spozywczy");

	nazwa = "Domyslna naywa";
	typ = "Spozywczy";
	zFoliaCzyBez = false;
	cena = 0;
	dniDoZepsucia = 0;
	ileObiektow++;
}

Spozywczy::Spozywczy(int nowaCena, int noweDniDoZepsucia, bool nowaFoliaCzyBez)
{
	DEBUG_LOG("Konsturktor Spozywczy z parametrem");

	typ = "Spozywczy";
	nazwa = "Domyslna nazwa";
	zFoliaCzyBez = nowaFoliaCzyBez;
	cena = nowaCena;
	dniDoZepsucia = noweDniDoZepsucia;
	ileObiektow++;
}

Spozywczy::Spozywczy(const Spozywczy &spozywczy)
{
	
	nazwa = spozywczy.nazwa;
	typ = spozywczy.typ;
	zFoliaCzyBez = spozywczy.zFoliaCzyBez;
	cena = spozywczy.cena;
	dniDoZepsucia = spozywczy.dniDoZepsucia;
}

void Spozywczy::wyswietlIle()
{
	cout << ileObiektow;
}

void Spozywczy::wyswietl()
{
	cout << "Nazwa: " << nazwa << endl << "Jest z folia czy bezw: ";
	if (zFoliaCzyBez)
	{
		cout << "Z\n";
	}
	else
	{
		cout << "Bez\n";
	}

	cout << "Cena: " << cena << endl << "Dni pozostale do zepsucia: " << dniDoZepsucia << endl;
}
void Spozywczy::wyswietlNazwe()
{
	cout << "Nazwa produktu: " << nazwa << endl;
}


void Spozywczy::zmienNazwe(string nowaNazwa)
{
	nazwa = nowaNazwa;
}
void Spozywczy::edytuj(int nowosc)
{
	cena = nowosc;
}
void Spozywczy::zmienCene(int nowaCena)
{
	cena = nowaCena;
}
void Spozywczy::zmienFolie()
{
	zFoliaCzyBez = !zFoliaCzyBez;
}
void Spozywczy::zmienPrzydatnosc(int noweZepsucie)
{
	dniDoZepsucia = noweZepsucie;
}


void Spozywczy::zapisz(Spozywczy &spozywczy)
{
	DEBUG_LOG("Zapisano Spozywczy");
	ofstream plik(nazwa_pliku_txt);
	plik << spozywczy;
	plik.close();
}

void Spozywczy::wczytaj(Spozywczy &spozywczy)
{
	DEBUG_LOG("Wczytano Spozywczy");
	ifstream plik(nazwa_pliku_txt);
	plik >> spozywczy;
	plik.close();
}

bool Spozywczy::operator == (const Spozywczy &spozywczy)
{
	if (spozywczy.cena == cena)
		return true;
	else
		return false;
}
bool Spozywczy::operator < (const Spozywczy &spozywczy)
{
	if (spozywczy.cena < cena)
		return false;
	else
		return true;
}
bool Spozywczy::operator > (const Spozywczy &spozywczy)
{
	if (spozywczy.cena > cena)
		return false;
	else
		return true;
}
Spozywczy & Spozywczy::operator = (const Spozywczy &spozywczy)
{
	cena = spozywczy.cena;
	nazwa = spozywczy.nazwa;
	dniDoZepsucia = spozywczy.dniDoZepsucia;
	zFoliaCzyBez = spozywczy.zFoliaCzyBez;

	return *this;
}
Spozywczy & Spozywczy::operator += (const Spozywczy &spozywczy)
{
	cena += spozywczy.cena;
	return *this;
}
Spozywczy & Spozywczy::operator -= (const Spozywczy &spozywczy)
{
	cena -= spozywczy.cena;
	return *this;
}
Spozywczy & Spozywczy::operator *= (const Spozywczy &spozywczy)
{
	cena *= spozywczy.cena;
	return *this;
}
Spozywczy & Spozywczy::operator ++ (int)
{
	cena++;
	return *this;
}
Spozywczy & Spozywczy::operator -- (int)
{
	if (cena != 0)
	{
		cena--;
	}
	return *this;
}

std::ostream& operator << (std::ostream &ost, Spozywczy &spozywczy)
{
	ost << spozywczy.nazwa << endl << spozywczy.zFoliaCzyBez << endl << spozywczy.cena << endl << spozywczy.dniDoZepsucia << endl;
	return ost;
}

std::istream& operator >> (std::istream& ist, Spozywczy &spozywczy)
{
	ist >> spozywczy.nazwa >> spozywczy.zFoliaCzyBez >> spozywczy.cena >> spozywczy.dniDoZepsucia;
	return ist;
}

Spozywczy::~Spozywczy()
{
	DEBUG_LOG("Destruktor Spozywczy");

	--ileObiektow;
}