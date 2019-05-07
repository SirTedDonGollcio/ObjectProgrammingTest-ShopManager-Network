#pragma once
#ifndef Pracownik_h
#define Pracownik_h

#include <iostream>
#include <string>
using namespace std;

#ifndef _DEBUG
#define DEBUG_LOG(plik) cout << __FILE__ << "(" << __LINE__ << "): " << plik << endl;
#else
#define DEBUG_LOG(plik)
#endif

class Pracownik
{
	private:
		static const int domyslnyIndex = 0;
		static const int domyslnyWiek = 25;
		static const int domyslnyWzrost = 180;
		static const int domyslnaPensja = 3000;
		static const char domyslnaPlec = 'M';



		int index_K;
		int wiek_K;
		int wzrost_K;
		string imie_K;
		string nazwisko_K;
		int pensja_K;
		string dzial_K;
		string posada_K;
		char plec_K;

	public:
		Pracownik();
		Pracownik(int index, int wiek, int wzrost, string imie, string nazwisko, int pensja, string dzial, string posada, char plec);
		Pracownik(const Pracownik &pracownik);
		~Pracownik();

		int zwrocIndex() const;
		int zwrocWiek() const;
		int zwrocWzrost() const;
		string zwrocImie() const;
		string zwrocNazwisko() const;
		int zwrocPensje() const;
		string zwrocDzial() const;
		string zwrocPosade() const;
		char zwrocPlec() const;

		Pracownik &operator=(const Pracownik &pracownik);
		friend std::ostream &operator<<(std::ostream &wyswietlacz, const Pracownik &pracownik);
};




#endif Pracownik_h
