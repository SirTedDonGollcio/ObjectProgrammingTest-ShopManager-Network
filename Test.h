#pragma once
#ifndef Test_h
#define Test_h

#include "Pracownik.h"
#include "Sklep.h"
#include "Sprzet.h"
#include "RTV.h"
#include "Spozywczy.h"
#include "OwoceWarzywa.h"
#include "Produkt2.h"

class ProduktTest
{
private:
public:
	void testKonstruktorProdukt();
	void testModyfikacja();
	void testZapis();
	void testOdczyt();
	void testPolimorfizm();
	void testMetodWirtualnychSTL();
};


class PracownikTest {
private:
public:
	void testKonstruktorPracownik();

};

class SprzetTest {
private:
public:
	void testKonstruktorSprzet();
};

class SklepTest {
private:
public:
	void testKonstruktorSklep();
	void testOperatorPlusPracownik();
	void testOperatorPlusSprzet();
	void testOperatorKonwersja();
};

#endif Test.h

