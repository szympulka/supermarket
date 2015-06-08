#include "stdafx.h"
#include <iostream>
#include "sklep.h"
#include <fstream>
#include <cstdlib>
#include <conio.h>

using namespace std;


void Warzywa::show()
{
	fstream plik;
	plik.open("Warzywa.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout << "Zawartosc pliku:" << endl << "Nazwa|Cena|Kod|Data|Ilosc|Pochodzenie\n";
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;


}  
void Owoce::show()
{
	fstream plik;
	plik.open("Owoce.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout << "Zawartosc pliku:" << endl << "Nazwa Cena Kod Data Ilosc Pochodzenie\n";
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;
}
void Alkohol::show()
{
	fstream plik;
	plik.open("Alkohol.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout << "Zawartosc pliku:" << endl << "Nazwa|Cena|Kod|Data|Ilosc|Procent|Pojemnosc \n";
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;
}
void Napoje::show()
{
	fstream plik;
	plik.open("Napoje.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout << "Zawartosc pliku:" << endl << "Nazwa Cena Kod Data Ilosc Procent Pojemnosc\n";
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;
}
void Suche::show()
{
	fstream plik;
	plik.open("Suche.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout << "Zawartosc pliku:" << endl << "Nazwa Cena Kod Data Ilosc \n";
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;
}

////////////////// Wyœwietl zapisane pliki/////////////////////////////////////////////////////////////////////////////
Towar *aa = new Warzywa, *bb = new Owoce, *cc= new Alkohol, *dd = new Napoje, *ee = new Suche ;

void Wyswietl::add()
{
	int towar;
	cout << "Dodaj towar do:"
		<< "\n[1]Warzywa:"
		<< "\n[2]Owoce:"
		<< "\n[3]Alkohol:"
		<< "\n[4]Napoje:"
		<< "\n[5]Suche:";

	towar = _getch(); // menu live
	switch (towar)
	{
	case '1': aa->add(); break; // Warzywa
	case '2': bb->add(); break; // Owoce
	case '3': cc->add(); break; // Alkohol
	case '4': dd->add(); break; // Napoje
	case '5': ee->add(); break; // Suche
	}
	
	
	
}

void Wyswietl::show()
{
	int towar;
	cout << "show towar:"
		<< "\n[1]Warzywa:"
		<< "\n[2]Owoce:"
		<< "\n[3]Alkohol:"
		<< "\n[4]Napoje:"
		<< "\n[5]Suche:";

	towar = _getch(); // menu live
	switch (towar)
	{
	case '1': aa->show(); system("cls"); break; // Warzywa
	case '2': bb->show(); system("cls"); break; // Owoce
	case '3': cc->show(); system("cls"); break; // Alkohol
	case '4': dd->show(); system("cls"); break; // Napoje
	case '5': ee->show(); system("cls"); break; // Suche
	}

	
}




