#include "stdafx.h"
#include <iostream>
#include "sklep.h"
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <string>
void deletee()
{

}
void change()
{

}

void menu()
{
	system("cls");
	int menu;
	cout << "\nWitaj w panelu administracyjnym:"
		<< "\n[1]Usun plik"
		<< "\n[2]Zmien login i haslo:";
	menu = _getch();
	switch (menu)
	{
	case '1': system("cls"); deletee();
	case '2': system("cls"); change();
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