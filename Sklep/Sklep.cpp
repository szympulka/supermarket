#include "stdafx.h"
#include <iostream>
#include "sklep.h"
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int menu;

	Towar *a = new Wyswietl;
	Find k1;
	Login k2;

	for (;;)
	{
		cout << "Witaj w programie do zarzadzania sklepem:";
		cout << "\n[1]Dodaj towar:\n[2]Sprawdz towar\n[3]Znajdz:\n[0]Exit:";
		menu = _getch(); //menu live

		if (menu == '0')
		{
			break;
		}
		else
			system("cls"); // czyszcze konsole
		switch (menu)
		{
		case '1': a->add(); system("cls");			 break;
		case '2': system("cls");  a->show();		 break;
		case '3': system("cls");  k1.find();		 break;
		case '9': system("cls");  k2.pass();		 break;
		}
	}
}


