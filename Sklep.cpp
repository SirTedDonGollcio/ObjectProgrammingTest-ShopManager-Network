#include "Sklep.h"
#include <iostream>
using namespace std;

int Sklep::liczbaSklepow=0;

Sklep::Sklep()
{
	DEBUG_LOG("Tworzenie sklepu (konstruktor domyslny)");
	Pracownik listaPracownikow_inProgress;
	Sprzet listaSprzetow_inProgress;
	Sklep *nastepny_K = NULL;
	liczbaPracownikow_K = 0;
	liczbaSprzetow_K = 0;
	szef_K = Pracownik();
	adres_K = "-";
	miasto_K = "-";
	listaPracownikow_K =new Pracownik[0];
	listaSprzetow_K =new Sprzet[0];

	liczbaSklepow++;
}

Sklep::Sklep(string adres, int liczbaSprzetow, int liczbaPracownikow, string miasto)
{
	DEBUG_LOG("Tworzenie sklepu z parametrami");
	Pracownik listaPracownikow_inProgress;
	Sprzet listaSprzetow_inProgress;

	index_K = liczbaSklepow + 1;
	
	if (liczbaPracownikow > maksymalnaLiczbaPracownikow)
	{
		liczbaPracownikow_K = maksymalnaLiczbaPracownikow;
	}
	else
	{
		liczbaPracownikow_K = liczbaPracownikow;
	}
	
	if (liczbaSprzetow > maksymalnaLiczbaSprzetow)
	{
		liczbaSprzetow_K = maksymalnaLiczbaSprzetow;
	}
	else
	{
		liczbaSprzetow_K = liczbaSprzetow;
	}
	
	adres_K = adres;
	miasto_K = miasto;
	listaPracownikow_K =new Pracownik[maksymalnaLiczbaPracownikow];
	listaSprzetow_K =new Sprzet[maksymalnaLiczbaSprzetow];

	liczbaSklepow++;
}

Sklep::Sklep(const Sklep &sklep)
{
	DEBUG_LOG("Kopiowanie sklepu");
	Sklep *nastepny_K = NULL;
	index_K = liczbaSklepow + 1;
	liczbaPracownikow_K = sklep.liczbaPracownikow_K;
	liczbaSprzetow_K = sklep.liczbaSprzetow_K;
	szef_K = sklep.szef_K;
	adres_K = sklep.adres_K;
	miasto_K = sklep.miasto_K;
	listaPracownikow_K = new Pracownik[maksymalnaLiczbaPracownikow];
	for (int i = 0; i < sklep.liczbaPracownikow_K; i++)
	{
		listaPracownikow_K[i] = sklep.listaPracownikow_K[i];
	}
	listaSprzetow_K = new Sprzet[maksymalnaLiczbaSprzetow];
	for (int i = 0; i < sklep.liczbaSprzetow_K; i++)
	{
		listaSprzetow_K[i] = sklep.listaSprzetow_K[i];
	}

	liczbaSklepow++;
}

Sklep::~Sklep() 
{
	DEBUG_LOG("Likwidacja Sklepu");
	delete[] listaPracownikow_K;
	delete[] listaSprzetow_K;
	listaPracownikow_K = nullptr;
	listaSprzetow_K = nullptr;
	--liczbaSklepow;
}

string Sklep::zwrocAdres() const
{
	return adres_K;
}
int Sklep::zwrocIndex() const
{
	return index_K;
}
string Sklep::zwrocMiasto() const
{
	return miasto_K;
}
int Sklep::zwrocLiczbePracownikow() const
{
	return liczbaPracownikow_K;
}

int Sklep::zwrocLiczbeSprzetow() const
{
	return liczbaSprzetow_K;
}
int Sklep::zwrocLiczbeSklepow() const
{
	return liczbaSklepow;
}
Pracownik* Sklep::zwrocListePracownikow() const
{
	return listaPracownikow_K;
}
Pracownik Sklep::zwrocListePracownikow(int numer) const
{
	return listaPracownikow_K[numer];
}
Sprzet* Sklep::zwrocListeSprzetow() const
{
	return listaSprzetow_K;
}
Sprzet Sklep::zwrocListeSprzetow(int numer) const
{
	return listaSprzetow_K[numer];
}

Sklep Sklep::operator+(const Pracownik &pracownik) const
{
	Sklep tymczasowe(*this);
	if (liczbaPracownikow_K >= maksymalnaLiczbaPracownikow)
		cout << "Za duzo pracownikow\n";
	else {
		tymczasowe.listaPracownikow_K[tymczasowe.liczbaPracownikow_K] = pracownik;
		tymczasowe.liczbaPracownikow_K++;
	}
	return tymczasowe;
}


Sklep Sklep::operator+(const Sprzet &sprzet) const
{
	Sklep tymczasowe(*this);
	if (liczbaSprzetow_K >= maksymalnaLiczbaSprzetow)
		cout << "Za duzo sprzetu\n";
	else {
		tymczasowe.listaSprzetow_K[tymczasowe.liczbaSprzetow_K] = sprzet;
		tymczasowe.liczbaSprzetow_K++;
	}
	return tymczasowe;
}



Sklep::operator std::string() const 
{
	std::string tymczasowe;
	tymczasowe = "Index sklepu: " + std::to_string(index_K) + "\n";
	return tymczasowe;
}
Sklep &Sklep::operator=(const Sklep &sklep)
{
	Sklep *nastepny_K = NULL;
	index_K = liczbaSklepow + 1;
	liczbaPracownikow_K = sklep.liczbaPracownikow_K;
	liczbaSprzetow_K = sklep.liczbaSprzetow_K;
	szef_K = sklep.szef_K;
	adres_K = sklep.adres_K;
	miasto_K = sklep.miasto_K;
	listaPracownikow_K = new Pracownik[maksymalnaLiczbaPracownikow];
	for (int i = 0; i < sklep.liczbaPracownikow_K; i++)
	{
		listaPracownikow_K[i] = sklep.listaPracownikow_K[i];
	}
	
	listaSprzetow_K = new Sprzet[maksymalnaLiczbaSprzetow];
	for (int i = 0; i < sklep.liczbaSprzetow_K; i++)
	{
		listaSprzetow_K[i] = sklep.listaSprzetow_K[i];
	}
	return *this;
}

std::ostream &operator<<(std::ostream& wyswietlacz, const Sklep &sklep) 
{
	wyswietlacz << endl;
	wyswietlacz << "Sklep:\n";
	wyswietlacz << "Index: " << sklep.index_K << endl;
	wyswietlacz << "Liczba Pracownikow: " << sklep.liczbaPracownikow_K << endl;
	wyswietlacz << "Liczba sprzetow: " << sklep.liczbaSprzetow_K << endl;
	wyswietlacz << "Szef: " << sklep.szef_K << endl;
	wyswietlacz << "Adres: " << sklep.adres_K << endl;
	wyswietlacz << "Miasto: " << sklep.miasto_K << endl;
	wyswietlacz << "Lista Pracownikow: \n";
	for (int i = 0; i < sklep.liczbaPracownikow_K; i++)
	{
		wyswietlacz << i << ". " << sklep.listaPracownikow_K[i] << endl;
	}
	wyswietlacz << "Lista Sprzetow: \n";
	for (int i = 0; i < sklep.liczbaSprzetow_K; i++)
	{
		wyswietlacz << i << ". " << sklep.listaSprzetow_K[i] << endl;
	}

	return wyswietlacz;
}