#include <iostream>
#include <string>
#include <fstream>
#include "Produkt2.h"

using namespace std;

Produkt::Produkt() {
	DEBUG_LOG("Domyslny konstruktor Produktu");
	typ = "Domyslny Typ";
}

Produkt::~Produkt()
{
	DEBUG_LOG("Destruktor Produktu");
}

std::ostream& operator << (std::ostream &ost, Produkt &produkt) {
	ost << produkt.typ;
	return ost;
}

std::istream& operator >> (std::istream &ist, Produkt &produkt) {
	ist >> produkt.typ;
	return ist;
}