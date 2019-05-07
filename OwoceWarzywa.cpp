#include <string>
#include <iostream>
#include <fstream>
#include "OwoceWarzywa.h"

using namespace std;
string nazwa_pliku_k = "owoceWarzywa.txt";

OwoceWarzywa::OwoceWarzywa()
{
	DEBUG_LOG("Domyslny konstruktor OwoceWarzywa");
	nazwa = "Owoc lub Warzywo";
	stopienDojrzalosci = 10;
	zFoliaCzyBez = false;
	dniDoZepsucia = 0;
	cena = 0;
	typ = "Owoc lub warzywo";
	ileObiektow++;
}

void OwoceWarzywa::edycja(int nowosc) 
{
	DEBUG_LOG("Metoda wirtualna z OwoceWarzywa");
	stopienDojrzalosci = nowosc;
}

void OwoceWarzywa::zapisz(OwoceWarzywa &owocewarzywa) 
{
	DEBUG_LOG("Zapisano OwoceWarzywa");
	ofstream plik(nazwa_pliku_k);
	plik << owocewarzywa;
	plik.close();
}

void OwoceWarzywa::wczytaj(OwoceWarzywa &owocewarzywa) 
{
	DEBUG_LOG("Wczytano OwoceWarzywa");
	ifstream plik(nazwa_pliku_k);
	plik >> owocewarzywa;
	plik.close();
}

void OwoceWarzywa::wyswietl()
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

	cout << "Cena: " << cena << endl << "Dni pozostale do zepsucia: " << dniDoZepsucia << endl << "Stopien Dojrzalosci: " << stopienDojrzalosci << endl;
}

std::ostream& operator << (std::ostream &ost, OwoceWarzywa &owoceWarzywa) 
{
	ost << "Nazwa: " << owoceWarzywa.nazwa << endl << "Jest z folia czy bezw: ";
	if (owoceWarzywa.zFoliaCzyBez)
	{
		ost << "Z\n";
	}
	else
	{
		ost << "Bez\n";
	}

	ost << "Cena: " << owoceWarzywa.cena << endl << "Dni pozostale do zepsucia: " << owoceWarzywa.dniDoZepsucia << endl << "Stopien Dojrzalosci: " << owoceWarzywa.stopienDojrzalosci << endl;
	return ost;
}

std::istream& operator >> (std::istream& ist, OwoceWarzywa &owoceWarzywa)
{
	ist >> owoceWarzywa.nazwa >> owoceWarzywa.zFoliaCzyBez >> owoceWarzywa.cena >> owoceWarzywa.dniDoZepsucia >> owoceWarzywa.stopienDojrzalosci;
	return ist;
}

OwoceWarzywa::~OwoceWarzywa()
{
	DEBUG_LOG("Dekonstruktor OwoceWarzywa");
	--ileObiektow;
}