#include "stdafx.h"
#include <iostream>
#include "sklep.h"
#include <fstream>

using namespace std;


void Towar::add()
{
	
		
		cin.clear(); 
		cin.sync();
		
        cout  << "Podaj nazwe produktu: ";
		getline(cin, nazwa);
		
		cout << "\nPodaj cene produktu: ";
		cin >> cena;
		cout << "\nPodaj kod produktu: ";
		cin >> kod;
		cout << "\nPodaj Date waznosci produktu(mm/rrrr): ";
		cin >> data_m;
		cin >> data_r;
		cout << "\nPodaj ilosc produktow: ";
		cin >> ilosc;
}
string Towar::n() 
{
	return nazwa;
}
double Towar::c()
{
	return cena;
}
double Towar::k()
{
	return kod;
}
double Towar::dm()
{
	return data_m;
}
double Towar::dr()
{
	return data_r;
}
double Towar::il()
{
	return ilosc;
}
//////////////////////////


// dodaj do pliku
void Warzywa::add()
{
	system("cls");
	Towar::add();

		cout << "\nPodaj pochodzenie produktu: ";
		cin  >> pochodzenie;

    fstream plik;
	plik.open("Warzywa.txt", ios::out | ios::app);

	plik << Towar::n();
	plik << "|";
	plik << Towar::c();
	plik << "|";
	plik << Towar::k();
	plik << "|";
	plik << Towar::dm();
	plik << ".";
	plik << Towar::dr();
	plik << "|";
	plik << Towar::il();
	plik << "|";
	plik << pochodzenie;
	plik << endl;

    plik.close();

}
void Owoce::add()
{
	system("cls");
	Towar::add();

	cout << "\nPodaj pochodzenie produktu: ";
	cin >> pochodzenie;

	fstream plik;
	plik.open("Owoce.txt", ios::out | ios::app);


	plik << Towar::n();
	plik << "|";
	plik << Towar::c();
	plik << "|";
	plik << Towar::k();
	plik << "|";
	plik << Towar::dm();
	plik << "|";
	plik << Towar::dr();
	plik << "|";
	plik << Towar::il();
	plik << "|";
	plik << pochodzenie;
	plik << endl;

	plik.close();


}
void Alkohol::add()
{
	system("cls");
	Towar::add();

	cout << "\nPodaj ilosc procent: ";
	cin >> procent;
	cout << "\nPodaj pojemnosc: ";
	cin >> pojemnosc;
	fstream plik;
	plik.open("Alkohol.txt", ios::out | ios::app);


	plik << Towar::n();
	plik << "|";
	plik << Towar::c();
	plik << "|";
	plik << Towar::k();
	plik << "|";
	plik << Towar::dm();
	plik << "|";
	plik << Towar::dr();
	plik << "|";
	plik << Towar::il();
	plik << "|";
	plik << procent;
	plik << "|";
	plik << pojemnosc;
	plik << endl;

	plik.close();

}
void Napoje::add()
{
	system("cls");
	Towar::add();
	cout << "\nPodaj pojemnosc produktu: ";
	cin >> pojemnosc;

	fstream plik;
	plik.open("Napoje.txt", ios::out | ios::app);


	plik << Towar::n();
	plik << "|";
	plik << Towar::c();
	plik << "|";
	plik << Towar::k();
	plik << "|";
	plik << Towar::dm();
	plik << "|";
	plik << Towar::dr();
	plik << "|";
	plik << Towar::il();
	plik << "|";
	plik << pojemnosc;
	plik << endl;

	plik.close();
}
void Suche::add()
{
	system("cls");
	Towar::add();


	fstream plik;
	plik.open("Suche.txt", ios::out | ios::app);


	plik << Towar::n();
	plik << "|";
	plik << Towar::c();
	plik << "|";
	plik << Towar::k();
	plik << "|";
	plik << Towar::dm();
	plik << "|";
	plik << Towar::il();
	plik << "|";
	plik << Towar::dr();
	plik << endl;

	plik.close();

}

// dodaj do pliku



