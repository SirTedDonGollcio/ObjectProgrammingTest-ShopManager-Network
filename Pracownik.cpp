#include "Pracownik.h"
#include <iostream>
#include <string>

using namespace std;

Pracownik::Pracownik()
{
	DEBUG_LOG("Domyslne tworzenie pracownika");

	index_K = domyslnyIndex;
	wzrost_K = domyslnyWzrost;
	wiek_K = domyslnyWiek;
	pensja_K = domyslnaPensja;
	plec_K = domyslnaPlec;
}

Pracownik::Pracownik(int index, int wiek, int wzrost, string imie, string nazwisko, int pensja, string dzial, string posada, char plec)
{
	DEBUG_LOG("Tworzenie pracownika z parametrami");

	index_K = index;
	wzrost_K = wzrost;
	wiek_K = wiek;
	pensja_K = pensja;
	plec_K = plec;
	imie_K = imie;
	nazwisko_K = nazwisko;
	dzial_K = dzial;
	posada_K = posada;
}

Pracownik::Pracownik(const Pracownik &pracownik)
{
	DEBUG_LOG("Kopiowanie pracownika");

	index_K = pracownik.index_K;
	wzrost_K = pracownik.wzrost_K;
	wiek_K = pracownik.wiek_K;
	pensja_K = pracownik.pensja_K;
	plec_K = pracownik.plec_K;
	imie_K = pracownik.imie_K;
	nazwisko_K = pracownik.nazwisko_K;
	dzial_K = pracownik.dzial_K;
	posada_K = pracownik.posada_K;
}


Pracownik::~Pracownik()
{
	DEBUG_LOG("Zwolnienie Pracownika");
}

int Pracownik::zwrocIndex() const
{
	return index_K;
}
int Pracownik::zwrocWiek() const
{
	return wiek_K;
}
int Pracownik::zwrocWzrost() const
{
	return wzrost_K;
}
string Pracownik::zwrocImie() const
{
	return imie_K;
}
string Pracownik::zwrocNazwisko() const
{
	return nazwisko_K;
}
int Pracownik::zwrocPensje() const
{
	return pensja_K;
}
string Pracownik::zwrocDzial() const
{
	return dzial_K;
}
string Pracownik::zwrocPosade() const
{
	return posada_K;
}
char Pracownik::zwrocPlec() const
{
	return plec_K;
}

std::ostream &operator<<(std::ostream& wyswietlacz, const Pracownik &pracownik) 
{
	wyswietlacz << endl;
	wyswietlacz << "Pracownik:\n";
	wyswietlacz << "Index: " << pracownik.index_K << endl;
	wyswietlacz << "Wzrost: " << pracownik.wzrost_K << endl;
	wyswietlacz << "Wiek: " << pracownik.wiek_K << endl;
	wyswietlacz << "Pensja: " << pracownik.pensja_K << endl;
	wyswietlacz << "Plec: " << pracownik.plec_K << endl;
	wyswietlacz << "Imie: " << pracownik.imie_K << endl;
	wyswietlacz << "Nazwisko: " << pracownik.nazwisko_K << endl;
	wyswietlacz << "Dzial: " << pracownik.dzial_K << endl;
	wyswietlacz << "Posada: " << pracownik.posada_K << endl;

	return wyswietlacz;
}

Pracownik &Pracownik::operator=(const Pracownik & pracownik)
{
	index_K = pracownik.index_K;
	wzrost_K = pracownik.wzrost_K;
	wiek_K = pracownik.wiek_K;
	pensja_K = pracownik.pensja_K;
	plec_K = pracownik.plec_K;
	imie_K = pracownik.imie_K;
	nazwisko_K = pracownik.nazwisko_K;
	dzial_K = pracownik.dzial_K;
	posada_K = pracownik.posada_K;

	return *this;
}