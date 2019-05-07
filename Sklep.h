#pragma once
#ifndef Sklep_h
#define Sklep_h

#include <iostream>
#include <string>
using namespace std;

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

#include "Produkt2.h"
#include "Pracownik.h"
#include "Sprzet.h"

class Sklep
{
	private:
	/*	static const int podstawowaLiczbaSklepow = 0;
		static const int podstawowaLiczbaPomieszczen = 0;
		static const int podstawowaLiczbaPracownikow = 0;
		static const int podstawowaLiczbaProdoktow = 0;*/

		static const int maksymalnaLiczbaProdoktow = 15;
		static const int maksymalnaLiczbaPracownikow = 5;
		static const int maksymalnaLiczbaSprzetow = 10;

		string adres_K;
		int index_K;
		string miasto_K;
		int liczbaPracownikow_K;
		int liczbaSprzetow_K;

		static int liczbaSklepow;

		Pracownik *listaPracownikow_K;
		Sprzet *listaSprzetow_K;
		Pracownik szef_K;
		Sklep *nastepny;
	public:
		Sklep();
		Sklep(string adres, int liczbaSprzetow, int liczbaPracownikow, string miasto);
		Sklep(const Sklep &sklep);
		~Sklep();

		string zwrocAdres() const;
		int zwrocIndex() const;
		string zwrocMiasto() const;
		int zwrocLiczbePracownikow() const;
		int zwrocLiczbeSprzetow() const;
		int zwrocLiczbeSklepow() const;
		Pracownik *zwrocListePracownikow() const;
		Pracownik zwrocListePracownikow(int numer) const;
		Sprzet *zwrocListeSprzetow() const;
		Sprzet zwrocListeSprzetow(int numer) const;

		Sklep operator+(const Pracownik &pracownik) const;
		Sklep operator+(const Sprzet &sprzet) const;


		operator std::string() const;

		Sklep &operator=(const Sklep &sklep);
		friend std::ostream &operator<<(std::ostream& wyswietlacz, const Sklep &sklep);
};

#endif Sklep_h