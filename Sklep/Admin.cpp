#include "stdafx.h"
#include <iostream>
#include "sklep.h"
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <windows.h>


void delete1()
{

	int choose = 0;
	char agreement;
	cout << "Ktory plik chcesz usunac ?"
		<< "\n[1]Warzywa"
		<< "\n[2]Owoce"
		<< "\n[3}Alkohol"
		<< "\n[4]Napoje"
		<< "\n[5]Suche";
	cin.clear();
	cin.sync();
	choose = _getch();
	cout << "\nCzy jestes pewien ze chcesz usunac ten plik?: Y|N";
	cin >> agreement;
	if ( agreement == 'y' )
	{
		
		if (choose = 1)  DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\Warzywa.txt");  
		if (choose = 2)  DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\Owoce.txt");    
		if (choose = 3)  DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\Alkohol.txt");  
		if (choose = 4)  DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\Napoje.txt");  
		if (choose = 5)  DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\Suche.txt");   
		cout << "\nPlik usunieto pomyslnie!\n";
		
	}
	else
		cout << "\nNie usunieto zadnego pliku!\n\n";

}
void change()
{ 
	char agree;
	cout << "czy na pewno chcesz zmienic login i haslo ?: Y|N";
	cin >> agree;
	if (agree == 'y')
	{
		string login;
		DeleteFileA("C:\\Users\\pulso\\Documents\\Visual Studio 2015\\Projects\\supermarket\\Sklep\\admin.txt");
		fstream plik;
		plik.open("Admin.txt", ios::in | ios::out);
		cout << "\nPodaj Login:"; cin >> login;
		cout << "\nPodaj haslo:";
		short unsigned int status;
		char actual;
		string input;
		do {
			actual = NULL;
			actual = _getch();
			status = static_cast <int>(actual);
			if (status == 13)
				break;

			input += actual;
			cout << "*";
		} while (1);

		plik << login;
		plik << "\n";
		plik << input;
		system("cls");
		cout << "\nLogin i haslo zostaly zmienione!\n\n";
	}
	else
	{
		system("cls");
		cout << "Login i haslo nie zostalo zmienione\n\n";
	}
}

void menu()
{
	cin.clear();
	cin.sync();
	system("cls");
	int menu;
	cout << "\nWitaj w panelu administracyjnym:"
		<< "\n[1]Usun plik"
		<< "\n[2]Zmien login i haslo:";
	menu = _getch();


	switch (menu)
	{
	case '1': system("cls"); delete1();				break;
	case '2': system("cls"); change();				break;
	}
}
void check(string input, string login)
{
	string napis;
	fstream plik;
	plik.open("admin.txt", ios::in);

	getline(plik, napis);
	if (login == napis)
	{
		getline(plik, napis);
		if (input == napis)
		{
			menu();
		}
		else 
		{
			system("cls");
			cout << "Podales zly login lub haslo\n\n";
		}
	}
	else
	{
		system("cls");
		cout << "Podales zly login lub haslo\n\n";
	}
	plik.close();
}

void password()
{
	
	short unsigned int status;
	char actual;
	string input, login;
	cout << "Podaj login:";
	cin >> login;
	cout << "\nPodaj haslo:";
	do {
		actual = NULL;
		actual = _getch();
		status = static_cast <int>(actual);
		if (status == 13)
			break;

		input += actual;
		cout << "*";
	} while (1);
	
	check(input,login);
}


void Login::pass()
{
	password();
}