#pragma once
#ifndef RTV_h
#define RTV_h

#include <iostream>
#include <fstream>
//#include "param_pracy.h"
//#include "param_urzadzenia.h"
#include "Produkt2.h"

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

class RTV : public Produkt {
private:
	//	Param_pracy *param_pracy;
	//	Param_urzadzenia param_urzadzenia;

protected:
	bool koniecnzoscPodlaczeniaDoPradu;
	string nazwa;
	int lataGwarancji;
	int iloscBaterii;
public:
	static int ileObiektow;

	RTV();
	RTV(int gwarancja, int baterie, bool prad);
	~RTV();
	RTV(const RTV &rtv);

	void zmienNazwe(string nowaNazwa);
	void zmienGwarancje(int nowaGwarancja);
	void zmienPrad();
	void zmienBaterie(int baterie);

	void wyswietl();
	void wyswietlIle();
	void wyswietlNazwe();

	void zapisz(RTV &rtv);
	void wczytaj(RTV &rtv);

	void edytuj(int nowosc);

	bool operator == (const RTV &rtv);
	bool operator < (const RTV &rtv);
	bool operator > (const RTV &rtv);
	RTV& operator = (const RTV &rtv);
	RTV& operator += (const RTV &rtv);
	RTV& operator -= (const RTV &rtv);
	RTV& operator *= (const RTV &rtv);
	RTV& operator ++ (int);
	RTV& operator -- (int);

	friend std::ostream& operator << (std::ostream &ost, RTV &rtv);
	friend std::istream& operator >> (std::istream &ist, RTV &rtv);
};

#endif RTV_h