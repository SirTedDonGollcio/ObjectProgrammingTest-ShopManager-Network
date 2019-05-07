#pragma once
#ifndef Spozywczy_h
#define Spozywczy_h

#include <iostream>
#include <fstream>
#include "Produkt2.h"

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

class Spozywczy : public Produkt {
private:
protected:
	bool zFoliaCzyBez;
	string nazwa;
	int dniDoZepsucia;
	int cena;
public:
	static int ileObiektow;

	Spozywczy();
	Spozywczy(int nowaCena, int noweDniDoZepsucia, bool nowaFoliaCzyBez);
	~Spozywczy();
	Spozywczy(const Spozywczy &spozywczy);

	void zmienNazwe(string nowaNazwa);
	void zmienPrzydatnosc(int noweZepsucie);
	void zmienFolie();
	void zmienCene(int nowaCena);

	void edytuj(int nowosc);

	void wyswietl();
	void wyswietlIle();
	void wyswietlNazwe();

	void zapisz(Spozywczy &spozywczy);
	void wczytaj(Spozywczy &spozywczy);


	bool operator == (const Spozywczy &spozywczy);
	bool operator < (const Spozywczy &spozywczy);
	bool operator > (const Spozywczy &spozywczy);
	Spozywczy& operator = (const Spozywczy &spozywczy);
	Spozywczy& operator += (const Spozywczy &spozywczy);
	Spozywczy& operator -= (const Spozywczy &spozywczy);
	Spozywczy& operator *= (const Spozywczy &spozywczy);
	Spozywczy& operator ++ (int);
	Spozywczy& operator -- (int);

	friend std::ostream& operator << (std::ostream &ost, Spozywczy &spozywczy);
	friend std::istream& operator >> (std::istream &ist, Spozywczy &spozywczy);
};

#endif Spozywczy_h