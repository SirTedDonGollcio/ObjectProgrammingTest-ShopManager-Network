#pragma once
#ifndef Produkt2_h
#define Produkt2_h
#include <iostream>
#include <fstream>

using namespace std;

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

class Produkt
{
protected:
	string typ;
public:
	Produkt();
	virtual ~Produkt();
	virtual void edytuj(int nowosc) = 0;
	virtual void wyswietl() = 0;

	friend std::ostream& operator << (std::ostream &ost, Produkt &produkt);
	friend std::istream& operator >> (std::istream &ist, Produkt &produkt);

};

#endif Produkt2_h