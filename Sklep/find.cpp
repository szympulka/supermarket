#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "sklep.h"

using namespace std;

void Find::find()
{

	// Tablica 5ciu ifstreamów, ka¿dy otwiera inny plik
	ifstream pliki[5];

	// Otwieranie tych plików
	pliki[0].open("Warzywa.txt");
	pliki[1].open("Owoce.txt");
	pliki[2].open("Alkohol.txt");
	pliki[3].open("Napoje.txt");
	pliki[4].open("Suche.txt");

	// Wprowadzenie szukanego wyrazu
	string szukaj;
	cout << "Czego szukasz?: ";
	cin >> szukaj;

	// Szukanie tego wyrazu w ka¿dym z plików
	string linia;

	for (int i = 0, j = 1; i<5; j = 1, pliki[i++].close()) 
	{
		
		// Je¿eli nie ma pliku, to opuœæ kolejne instrukcje
		if (pliki[i].fail()) continue;

		// Pobieranie i przeszukiwanie linii
		while ( getline(pliki[i], linia) )
		{

			// Je¿eli siê uda znaleŸæ fragment
			if (linia.find(szukaj) != string::npos)

				// To go poka¿
				cout << "Linia " << j << " w pliku nr." << i + 1 << ": " << endl << linia << endl << endl;

			// Nowa linia
			j++;
		}
	}
}