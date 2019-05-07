#pragma once
#ifndef mainly_h
#define mainly_h

#include <iostream>
#include "Test.h"
using namespace std;

void wyswietlMenu();
void uzyjMenu();


void wyswietlMenu()
{
	cout << "\n1.Pracownikow\n2.Sprzety\n3.Sklepy\n4.Operator addytywny pracownikow\n5.Operator addytywny sprzetow\n6.Operator konwersyjny\n7.Test klas dziedziczacych po klasie Produkt\n8.Test metod modyfikujacych pola klas dziedziczacych po klasie Produkt\n9.Test zapisu do pliku tesktowego klas dziedziczacych po klasie Produkt\n10.Test odczytu z pliku tekstowego klas dziedziczacych po klasie Produkt\n11.Test Polimorfizmu z uzyciem tablicy wskaznikow na obiekty klasy podstawowej\n12.Test uzycia metod wirtualnych na wektor obiektow(STL) w celu pozbycia sie tablicy wskaznikow\n13.Koniec Programu\n";
}

void uzyjMenu()
{
	int enter = 0;

	while (enter != 13)
	{
		wyswietlMenu();

		cin >> enter;
		if (enter != 13)
		{
			switch (enter)
			{
				case 1:
				{
					PracownikTest pracownikTest;
					pracownikTest.testKonstruktorPracownik();
					break;
					
				}
				case 2:
				{
					SprzetTest sprzetTest;
					sprzetTest.testKonstruktorSprzet();
					break;
				}
				case 3:
				{
					SklepTest sklepTest1;
					sklepTest1.testKonstruktorSklep();
					break;
				}
				case 4:
				{
					SklepTest sklepTest2;
					sklepTest2.testOperatorPlusPracownik();
					break;
				}
				case 5:
				{
					SklepTest sklepTest4;
					sklepTest4.testOperatorPlusSprzet();
					break;
				}
				case 6:
				{
					SklepTest sklepTest6;
					sklepTest6.testOperatorKonwersja();
					break;
				}
				case 7:
				{
					ProduktTest produktTest;
					produktTest.testKonstruktorProdukt();
					break;
				}
				case 8:
				{
					ProduktTest produktTest2;
					produktTest2.testModyfikacja();
					break;
				}
				case 9:
				{
					ProduktTest produktTest3;
					produktTest3.testZapis();
					break;
				}
				case 10:
				{
					ProduktTest produktTest4;
					produktTest4.testOdczyt();
					break;
				}
				case 11:
				{
					ProduktTest produktTest5;
					produktTest5.testPolimorfizm();
					break;
				}
				case 12:
				{
					ProduktTest produktTest6;
					produktTest6.testMetodWirtualnychSTL();
					break;
				}
				default:
				{
					cout << "Niesklasyfikowany wybor, wybierz ponownie\n";
					break;
				}
			}
		}
	}
	cout << "\nProgram sie zakonczy! Papa :)\n";
}


#endif mainly_h