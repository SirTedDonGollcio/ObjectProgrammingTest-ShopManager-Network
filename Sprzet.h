#pragma once
#ifndef Sprzet_h
#define Sprzet_h

#include <iostream>
#include <string>
using namespace std;

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif
static const float domyslnaWartosc = 5000;
class Sprzet
{
private:
	static const int domyslnyIndex = 0;
	static const int domyslnyRokProdukcji = 2019;
	static const int domyslnaWysokosc = 200;
	static const int domyslnaSzerokosc = 200;



	int index_K;
	int rokProdukcji_K;
	int wysokosc_K;
	int szerokosc_K;
	string nazwa_K;
	string sektor_K;
	string kategoria_K;
	float wartosc_K;
	string pojemnosc_K;

public:
	Sprzet();
	Sprzet(int index, int rokProdukcji, int wysokosc, int szerokosc, string nazwa, string sektor, string kategoria, float wartosc,string pojemnosc);
	Sprzet(const Sprzet &sprzet);
	~Sprzet();

	int zwrocIndex();
	int zwrocRokProdukcji();
	int zwrocWysokosc();
	int zwrocSzerokosc();
	string zwrocNazwe();
	string zwrocSektor();
	string zwrocKategorie();
	float zwrocWartosc();
	string zwrocPojemnosc();

	Sprzet &operator=(const Sprzet &sprzet);
	friend std::ostream &operator<<(std::ostream &wyswietlacz, const Sprzet &sprzet);
};




#endif Sprzet_h

