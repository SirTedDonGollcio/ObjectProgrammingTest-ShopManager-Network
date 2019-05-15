#pragma once
#ifndef OwoceWarzywa_h
#define OwoceWarzywa_h
#include "Spozywczy.h"

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

class OwoceWarzywa : public Spozywczy {
private:
	int stopienDojrzalosci;
public:
	OwoceWarzywa();
	~OwoceWarzywa();
	void edycja(int nowosc);
	void zapisz(OwoceWarzywa &owocewarzywa);
	void wczytaj(OwoceWarzywa &owocewarzywa);
	void wyswietl();

	friend std::ostream& operator << (std::ostream &ost, OwoceWarzywa &owocewarzywa);
	friend std::istream& operator >> (std::istream &ist, OwoceWarzywa &owocewarzywa);
};

#endif OwoceWarzywa_h