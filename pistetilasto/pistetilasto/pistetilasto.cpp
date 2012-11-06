#include <string>
#include <iostream>
#include <list>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <iomanip>

#include <fcntl.h>
#include <io.h>

#include "pelaaja.h"

using namespace std;

bool run = true;

list<pelaaja> pelaajat;

int go_to = 0;

void valikko();

void lisaa();
void listaa();

void print(pelaaja p);

int main() {

	_setmode(_fileno(stdout), _O_U8TEXT);
	_setmode(_fileno(stdin), _O_U8TEXT);

	while(run) {
		switch(go_to) {
		case 0:
			go_to=0;
			valikko();
			break;
		case 1:
			go_to=0;
			lisaa();
			break;
		case 2:
			go_to=0;
			listaa();
			break;
		case 3:
			go_to=0;
			run = false;
			break;
		}
	}
	return 0;
}

void valikko() {
	int valinta;
	wcout << L"\n\nValikko:\n1. Lisää uusi\n2. Listaa pelaajat\n3. Lopeta\nAnna numero\n>";
	wcin >> valinta;

	switch(valinta) {
	case 1:
		lisaa();
		break;
	case 2:
		listaa();
		break;
	case 3:
		run=false;
		break;
	default:
		wcout <<  L"\nVirheellinen valinta\n";
	}
}

void lisaa() {
	wstring nimi;
	wstring maalit, syotot;
	int imaalit, isyotot;

	wcin.sync();

	wcout << L"\nAnna pelaajan nimi.\n";
	getline(wcin,nimi);

	wcout << L"Kuinka monta maalia " << nimi << L" on tehnyt?\n";
	getline(wcin,maalit);


	wistringstream ssmaalit(maalit);
	ssmaalit >> imaalit;

	wcout << L"Kuinka monta syöttöä " << nimi << L" on tehnyt?\n";
	getline(wcin,syotot);

	wistringstream sssyotot(syotot);
	sssyotot >> isyotot;

	wcout << L"\nNimi:\t" << nimi << L"\nMaalit:\t" << imaalit << L"\nSyötöt:\t" << isyotot;
	wcout<< L"\n\n\"t\" tallentaa tiedot, \"u\" kysyy uudelleen ja \"p\" peruuttaa.\n>";
	wstring valinta;
	wcin >> valinta;

	if (valinta == L"t") {
		pelaaja p;
		p.nimi = nimi;
		p.maalit = imaalit;
		p.syotot = isyotot;

		p.laske();

		pelaajat.push_back(p);
	} else if (valinta == L"u") {
		go_to=1;
		return;

	} else if (valinta == L"p") {
		return;
	}


}

void listaa() {
	wcout << L"\n";
	wcout << setiosflags(ios::left) << setw(20) << L"Nimi   " << setw(8) << L"Maalit  " << setw(8) << L"Syötöt" << setw(9) << L"Pisteet  \n";
	for_each(pelaajat.begin(),pelaajat.end(),print);
	wcout << L"\n";
}

void print(pelaaja p) {
	wcout << setiosflags(ios::left) << setw(20) << p.nimi << setw(8) << p.maalit << setw(8) << p.syotot << setw(9) << p.pisteet << L"\n";
}