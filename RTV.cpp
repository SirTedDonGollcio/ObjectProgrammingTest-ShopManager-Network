#include <iostream>
#include <string>
#include <fstream>
#include "RTV.h"

using namespace std;

int RTV::ileObiektow = 0;
string nazwa_pliku_t = "rtv.txt";

RTV::RTV()
{
	DEBUG_LOG("Domyslny Konstruktor RTV");

	nazwa = "Domyslna nazwa";
	koniecnzoscPodlaczeniaDoPradu = false;
	lataGwarancji = 0;
	iloscBaterii = 0;
	typ = "RTV";
	ileObiektow++;
}

RTV::RTV(int gwarancja, int baterie, bool prad)
{
	DEBUG_LOG("Konsturktor RTV z parametrem");

	nazwa = "Domyslna nazwa";
	typ = "RTV";
	koniecnzoscPodlaczeniaDoPradu = prad;
	lataGwarancji = gwarancja;
	iloscBaterii = baterie;
	ileObiektow++;
}

RTV::RTV(const RTV &rtv)
{

	nazwa = rtv.nazwa;
	koniecnzoscPodlaczeniaDoPradu = rtv.koniecnzoscPodlaczeniaDoPradu;
	lataGwarancji = rtv.lataGwarancji;
	iloscBaterii = rtv.iloscBaterii;
}

void RTV::wyswietlIle()
{
	cout << ileObiektow;
}

void RTV::wyswietl()
{
	cout << "Nazwa: " << nazwa << endl << "Koniecznosc Podlaczenia do Pradu: ";
	if (koniecnzoscPodlaczeniaDoPradu)
	{
		cout << "Tak\n";
	}
	else
	{
		cout << "Nie\n";
	}

	cout << "Ilosc Lat Gwarancji: " << lataGwarancji << endl << "Ilosc potrzebnych baterii: " << iloscBaterii << endl;
}
void RTV::wyswietlNazwe()
{
	cout << "Nazwa produktu: " << nazwa << endl;
}


void RTV::zmienNazwe(string nowaNazwa)
{
	nazwa = nowaNazwa;
}
void RTV::zmienGwarancje(int nowaGwarancja)
{
	lataGwarancji = nowaGwarancja;
}
void RTV::zmienPrad()
{
	koniecnzoscPodlaczeniaDoPradu = !koniecnzoscPodlaczeniaDoPradu;
}
void RTV::zmienBaterie(int baterie)
{
	iloscBaterii = baterie;
}
void RTV::edytuj(int nowosc)
{
	lataGwarancji = nowosc;
}

void RTV::zapisz(RTV &rtv)
{
	DEBUG_LOG("Zapisano RTV");
	ofstream plik(nazwa_pliku_t);
	plik << rtv;
	plik.close();
}

void RTV::wczytaj(RTV &rtv)
{
	DEBUG_LOG("Wczytano RTV");
	ifstream plik(nazwa_pliku_t);
	plik >> rtv;
	plik.close();
}

bool RTV::operator == (const RTV &rtv)
{
	if (rtv.lataGwarancji == lataGwarancji)
		return true;
	else
		return false;
}
bool RTV::operator < (const RTV &rtv)
{
	if (rtv.lataGwarancji < lataGwarancji)
		return false;
	else
		return true;
}
bool RTV::operator > (const RTV &rtv)
{
	if (rtv.lataGwarancji > lataGwarancji)
		return false;
	else
		return true;
}
RTV & RTV::operator = (const RTV &rtv)
{
	lataGwarancji = rtv.lataGwarancji;
	nazwa = rtv.nazwa;
	iloscBaterii = rtv.iloscBaterii;
	koniecnzoscPodlaczeniaDoPradu = rtv.koniecnzoscPodlaczeniaDoPradu;

	return *this;
}
RTV & RTV::operator += (const RTV &rtv)
{
	lataGwarancji += rtv.lataGwarancji;
	return *this;
}
RTV & RTV::operator -= (const RTV &rtv)
{
	lataGwarancji -= rtv.lataGwarancji;
	return *this;
}
RTV & RTV::operator *= (const RTV &rtv)
{
	lataGwarancji *= rtv.lataGwarancji;
	return *this;
}
RTV & RTV::operator ++ (int)
{
	lataGwarancji++;
	return *this;
}
RTV & RTV::operator -- (int)
{
	if (lataGwarancji != 0)
	{
		lataGwarancji--;
	}
	return *this;
}

std::ostream& operator << (std::ostream &ost, RTV &rtv)
{
	ost << "Nazwa: " << rtv.nazwa << endl << "Koniecznosc Podlaczenia do Pradu: ";
	if (rtv.koniecnzoscPodlaczeniaDoPradu)
	{
		ost << "Tak\n";
	}
	else
	{
		ost << "Nie\n";
	}

	ost << "Ilosc Lat Gwarancji: " << rtv.lataGwarancji << endl << "Ilosc potrzebnych baterii: " << rtv.iloscBaterii << endl;
	return ost;
}

std::istream& operator >> (std::istream& ist, RTV &rtv)
{
	ist >> rtv.nazwa >> rtv.koniecnzoscPodlaczeniaDoPradu >> rtv.lataGwarancji >> rtv.iloscBaterii;
	return ist;
}

RTV::~RTV()
{
	DEBUG_LOG("Destruktor RTV");

	--ileObiektow;
}