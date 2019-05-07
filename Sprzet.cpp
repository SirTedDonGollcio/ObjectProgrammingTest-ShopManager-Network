#include "Sprzet.h"
#include <iostream>
#include <string>

using namespace std;

Sprzet::Sprzet()
{
	DEBUG_LOG("Domyslne tworzenie Sprzetu");

	index_K = domyslnyIndex;
	wysokosc_K = domyslnaWysokosc;
	szerokosc_K = domyslnaSzerokosc;
	rokProdukcji_K = domyslnyRokProdukcji;
	wartosc_K = domyslnaWartosc;
}

Sprzet::Sprzet(int index, int rokProdukcji, int wysokosc, int szerokosc, string nazwa, string sektor, string kategoria, float wartosc, string pojemnosc)
{
	DEBUG_LOG("Tworzenie Sprzetu z parametrami");

	index_K = index;
	rokProdukcji_K = rokProdukcji;
	wysokosc_K = wysokosc;
	szerokosc_K = szerokosc;
	nazwa_K = nazwa;
	sektor_K = sektor;
	kategoria_K = kategoria;
	wartosc_K = wartosc;
	pojemnosc_K = pojemnosc;
}

Sprzet::Sprzet(const Sprzet &sprzet)
{
	DEBUG_LOG("Kopiowanie Sprzetu");

	index_K = sprzet.index_K;
	rokProdukcji_K = sprzet.rokProdukcji_K;
	wysokosc_K = sprzet.wysokosc_K;
	szerokosc_K = sprzet.szerokosc_K;
	nazwa_K = sprzet.nazwa_K;
	sektor_K = sprzet.sektor_K;
	kategoria_K = sprzet.kategoria_K;
	wartosc_K = sprzet.wartosc_K;
	pojemnosc_K = sprzet.pojemnosc_K;
}


Sprzet::~Sprzet()
{
	DEBUG_LOG("Strata Sprzetu");
}

int Sprzet::zwrocIndex()
{
	return index_K;
}
int Sprzet::zwrocRokProdukcji()
{
	return rokProdukcji_K;
}
int Sprzet::zwrocWysokosc()
{
	return wysokosc_K;
}
int Sprzet::zwrocSzerokosc()
{
	return szerokosc_K;
}
string Sprzet::zwrocNazwe()
{
	return nazwa_K;
}
string Sprzet::zwrocSektor()
{
	return sektor_K;
}
string Sprzet::zwrocKategorie()
{
	return kategoria_K;
}
float Sprzet::zwrocWartosc()
{
	return wartosc_K;
}
string Sprzet::zwrocPojemnosc()
{
	return pojemnosc_K;
}

std::ostream &operator<<(std::ostream& wyswietlacz, const Sprzet &sprzet) 
{
	wyswietlacz << endl;
	wyswietlacz << "Sprzet:\n";
	wyswietlacz << "Index: " << sprzet.index_K << endl;
	wyswietlacz << "Rok produkcji: " << sprzet.rokProdukcji_K << endl;
	wyswietlacz << "Wysokosc: " << sprzet.wysokosc_K << endl;
	wyswietlacz << "Szerokosc: " << sprzet.szerokosc_K << endl;
	wyswietlacz << "Nazwa: " << sprzet.nazwa_K << endl;
	wyswietlacz << "Sektor: " << sprzet.sektor_K << endl;
	wyswietlacz << "Kategoria: " << sprzet.kategoria_K << endl;
	wyswietlacz << "Wartosc: " << sprzet.wartosc_K << endl;
	wyswietlacz << "Pojemnosc: " << sprzet.pojemnosc_K << endl;

	return wyswietlacz;
}

Sprzet &Sprzet::operator=(const Sprzet & sprzet)
{
	index_K = sprzet.index_K;
	rokProdukcji_K = sprzet.rokProdukcji_K;
	wysokosc_K = sprzet.wysokosc_K;
	szerokosc_K = sprzet.szerokosc_K;
	nazwa_K = sprzet.nazwa_K;
	sektor_K = sprzet.sektor_K;
	kategoria_K = sprzet.kategoria_K;
	wartosc_K = sprzet.wartosc_K;
	pojemnosc_K = sprzet.pojemnosc_K;

	return *this;
}