#include "Test.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void PracownikTest::testKonstruktorPracownik() 
{
	cout << "______________________\n";
	cout << "Domyslny Pracownik" << endl;
	Pracownik pracownik1;
	cout << pracownik1 << endl;

	cout << "Pracownicy z parametrami" << endl;
	Pracownik pracownik2(1,18,178,"Krzysztof","Krawczyk",3000000,"muzyczny","naganiacz",'M');
	Pracownik pracownik3(2,75, 120, "Gienia", "Stara", 2100, "warzywniak", "sprzedawca", 'K');
	Pracownik pracownik4(3,69, 169, "Warol","Kojtyla",2137,"dzieciecy","doradca",'M');
	
	cout << pracownik2 << endl;
	cout << pracownik3 << endl;
	cout << pracownik4 << endl;

	cout << "Skopiowany Pracownik: " << endl;
	Pracownik pracownik5(pracownik3);
	cout << pracownik5 << endl;
	cout << "------------------\n";
}



void SprzetTest::testKonstruktorSprzet()
{
	cout << "______________________\n";
	cout << "Domyslny Sprzet" << endl;
	Sprzet sprzet1;
	cout << sprzet1 << endl;

	cout << "Sprzety z parametrami" << endl;
	Sprzet sprzet2(1,2000,25,30,"Polka","Puszki","Do trzymania",450.50,"5000 puszek");
	Sprzet sprzet3(2,2005,40,45,"Kasa","Kasa","Platnosci",50000.99,"Ponad 1000000zl");
	Sprzet sprzet4(3,2017,80,160,"Lodowka","Chlodziarki","Do trzymania", 8900.9,"Bardzo duzo zimnych rzeczy");

	cout << sprzet2 << endl;
	cout << sprzet3 << endl;
	cout << sprzet4 << endl;

	cout << "Skopiowany sprzet: " << endl;
	Sprzet sprzet5(sprzet3);
	cout << sprzet5 << endl;
	cout << "------------------\n";
}

void SklepTest::testKonstruktorSklep()
{
	cout << "______________________\n";
	cout << "Domyslny Sklep" << endl;
	Sklep sklep1;
	cout << sklep1 << endl;

	cout << "Sklepy z parametrami" << endl;
	Sklep sklep2("Tatrzanska 7A",3,3,"Warszawa");
	Sklep sklep3("Benniego 7", 3,  3, "Tomaszow Mazowiecki");
	Sklep sklep4("Zepsuta 15", 3,  3, "Lodz");

	cout << sklep2 << endl;
	cout << sklep3 << endl;
	cout << sklep4 << endl;

	cout << "Skopiowany sklep: " << endl;
	Sklep sklep5(sklep3);
	cout << sklep5 << endl;
	cout << "------------------\n";
}

void SklepTest::testOperatorPlusPracownik() 
{
	Sklep sklepTest("nijaka",3,6,"Wawa");
	Pracownik pracownik1(1, 18, 178, "Krzysztof", "Krawczyk", 3000000, "muzyczny", "naganiacz", 'M');
	Pracownik pracownik2(3, 69, 169, "Warol", "Kojtyla", 2137, "dzieciecy", "doradca", 'M');

	cout << pracownik1 << endl;
	cout << "-----------\n";
	sklepTest = (sklepTest + pracownik1) + pracownik2;
	cout << sklepTest << endl;

	cout << sklepTest + pracownik1 << endl;
	cout << "------------\n";
}


void SklepTest::testOperatorPlusSprzet()
{
	Sklep sklepTest("nijaka", 3,  4, "Wawa");
	Sprzet sprzet1(2, 2005, 40, 45, "Kasa", "Kasa", "Platnosci", 50000.99, "Ponad 1000000zl");
	Sprzet sprzet2(3, 2017, 80, 160, "Lodowka", "Chlodziarki", "Do trzymania", 8900.9, "Bardzo duzo zimnych rzeczy");

	cout << sprzet1 << endl;
	cout << "-----------\n";
	sklepTest = (sklepTest + sprzet1) + sprzet2;
	cout << sklepTest << endl;

	cout << sklepTest + sprzet1 << endl;
	cout << "------------\n";
}



void SklepTest::testOperatorKonwersja() 
{
	cout << "------------\n";
	Sklep sklep1;
	string test;
	test = std::string(sklep1);
	cout << test << endl;
	cout << "------------\n";

}

void ProduktTest::testKonstruktorProdukt()
{
	cout << "______________________\n";
	cout << "Domyslne Przedmioty" << endl << "RTV: \n";
	RTV sprzecik;
	OwoceWarzywa przedmiocik;
	cout << sprzecik << endl << "Spozywcze a konkretnie owocowo warzywne: \n" << przedmiocik << endl;

	cout << "RTV z parametrami" << endl;
	RTV sprzecik2(3, 3, true);
	
	cout << sprzecik2 << endl;
	
	cout << "Skopiowany RTV: " << endl;
	RTV sprzecik3(sprzecik2);
	cout << sprzecik3 << endl;
	cout << "------------------\n";

}
void ProduktTest::testModyfikacja()
{
	cout << "______________________\n";
	cout << "Domyslny owoc/warzywo: \n";
	OwoceWarzywa przedmiocik;
	cout << przedmiocik << endl;
	cout << "Ten sam owoc po modyfikacji";
	przedmiocik.zmienPrzydatnosc(123);
	przedmiocik.zmienNazwe("Baklazan");
	przedmiocik.zmienFolie();
	przedmiocik.zmienCene(5);
	cout << przedmiocik << endl;
	cout << "Domyslny RTV: ";
	RTV sprzecik;
	cout << sprzecik << endl;
	cout << "Ten sam sprzet po modyfikacji";
	sprzecik.zmienBaterie(15);
	sprzecik.zmienGwarancje(8);
	sprzecik.zmienNazwe("Telewizor");
	sprzecik.zmienPrad();
	cout << sprzecik << endl;
	cout << "------------------\n";
}
void ProduktTest::testZapis()
{
	OwoceWarzywa przedmiocik;
	RTV sprzecik;
	przedmiocik.zmienPrzydatnosc(123);
	przedmiocik.zmienNazwe("Baklazan");
	przedmiocik.zmienFolie();
	przedmiocik.zmienCene(5);
	sprzecik.zmienBaterie(15);
	sprzecik.zmienGwarancje(8);
	sprzecik.zmienNazwe("Telewizor");
	sprzecik.zmienPrad();
	cout << "Zapisane zostana zmodyfikowane w poprzednim tescie RTV i OwocoWarzywo\n";
	przedmiocik.zapisz(przedmiocik);
	sprzecik.zapisz(sprzecik);
	cout << "Zapisanie zakonczone\n";
}
void ProduktTest::testOdczyt()
{
	OwoceWarzywa przedmiocik;
	RTV sprzecik;
	cout << "Wyswietlenie przed wczytaniem: \nRTV: \n" << sprzecik << "Owoc/warzywo: \n" << przedmiocik << endl << "Wyswietlenie po wczytaniu\n";
	przedmiocik.wczytaj(przedmiocik);
	sprzecik.wczytaj(sprzecik);
	cout << "RTV: \n" << sprzecik << endl << "Owoc/warzywo: \n" << przedmiocik << endl << "Wczytywanie zakonczone\n";
}
void ProduktTest::testPolimorfizm()
{
	cout << "Polimorfizm\n";
	Spozywczy spozywczy;
	RTV rtv;
	OwoceWarzywa owoce;
	Produkt *obiekty[3];
	obiekty[0] = &spozywczy;
	obiekty[1] = &rtv;
	obiekty[2] = &owoce;
	for (int i = 0; i < 3; i++)
	{
		obiekty[i]->edytuj(333);
		obiekty[i]->wyswietl();
	}
	cout << endl;

}
void ProduktTest::testMetodWirtualnychSTL()
{
	Spozywczy spozywczy;
	RTV rtv;
	OwoceWarzywa owoce;
	vector <Produkt*> obiekty;
	obiekty.push_back(&spozywczy);
	obiekty.push_back(&rtv);
	obiekty.push_back(&owoce);

	for (int i = 0; i < 3; i++) 
	{
		
		obiekty[i]->edytuj(666);
		obiekty[i]->wyswietl();
	}
	obiekty.clear();
}