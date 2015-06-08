#include "stdafx.h"
#include <string>

using namespace std;



class Towar  //klasa matka
{
    string nazwa;
    double cena ;
    long double kod ;
    int data_m  ;
	int data_r;
	int ilosc;
	// up na potrzebe do zpaisu pliku
public:
	virtual void add() = 0; // poliformizm 
	virtual void show() = 0;// poliformizm 
	string n();
	double c();
	double k();
	double dm();
	double dr();
	double il();
	

	

    Towar(string n="nic", double c=0 , long double k=0,int dw=0 , int dr=0, int il=0)
    {
        nazwa = n;
        cena = c;	
        kod = k ;
        data_m = dw;
		data_r = dr;
		ilosc = il;
    }

};


/////////////////////////////////////////////////////////////////////////////////////////

class Warzywa :public Towar // dziedziczenie class Towar
{
    string pochodzenie ;
public:
    virtual void add();
	virtual void show();



    Warzywa ( string n="pusto", double c=0 , double k=0,int dw=0,string poch="pusto" )
    :Towar(n,c,k,dw)
    {
        pochodzenie = poch ;
    }

};
class Owoce :public Towar // dziedziczenie class Towar
{
	string pochodzenie;
public:
		virtual void add();
		virtual void show();

    Owoce (string n="pusto", double c=0 , double k=0,int dw=0, string poch="pusto" )
    :Towar(n,c,k,dw)
    {
		pochodzenie = poch;
    }
};
class Alkohol :public Towar // dziedziczenie class Towar
{
    double procent;
    double pojemnosc;

public:
		virtual void add();
		virtual void show();

    Alkohol (string n="pusto", double c=0 , double k=0,int dw=0,double pr=0, double pj=0 )
    :Towar(n,c,k,dw)
    {
        procent= pr;
        pojemnosc= pj;
    }
};
class Napoje :public Towar // dziedziczenie class Towar
{
    double pojemnosc;

public:
		virtual void add();
		virtual void show();

    Napoje (string n="pusto", double c=0 , double k=0,int dw=0 , double pj=0 )
    :Towar(n,c,k,dw)
    {
        pojemnosc=pj;
    }
};
class Suche :public Towar // dziedziczenie class Towar
{

public:
		virtual void add();
		virtual void show();

    Suche (string n="pusto", double c=0 , double k=0,int dw=0 )
    :Towar(n,c,k,dw)
    {

    }
};
/////////////////////////////////////////////////////////////////////////////////////////
class Wyswietl : public Warzywa // dziedziczenie class Towar
{
public:
	virtual void add();
	virtual void show();
};
//////////////////////////////////////////////////////////////////////////////////////////
class Find 
{
public:
	void find();
};

