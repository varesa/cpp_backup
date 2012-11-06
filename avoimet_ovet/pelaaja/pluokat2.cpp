#include <iostream>
#include <utf8>
#include <ctime>
#include <iomanip>
#include <Windows.h>

#include "pelaaja.h"


using namespace ev;
using namespace std;

int main() {
	utf8::use();
	srand ((unsigned)time(NULL));
	pelaaja * p1 = new pelaaja();
	pelaaja * p2 = new pelaaja();
	pelaaja * p3 = new pelaaja();

	int OldMaalit1,OldMaalit2,OldMaalit3;

	for (int x = 1; x <= 5; x++) {
		OldMaalit1 = p1->getmaalit();
		OldMaalit2 = p2->getmaalit();
		OldMaalit3 = p3->getmaalit();
		p1->lauo();
		p2->lauo();
		p3->lauo();

		if(p1->getmaalit() != OldMaalit1) {
			wcout << L"P1 Osuu maaliin   ";
		} else {
			wcout << L"P1 Ei saa maalia  ";
		}

		if(p2->getmaalit() != OldMaalit2) {
			wcout << L"P2 Osuu maaliin   ";
		} else {
			wcout << L"P2 Ei saa maalia  ";
		}

		if(p3->getmaalit() != OldMaalit3) {
			wcout << L"P3 Osuu maaliin   ";
		} else {
			wcout << L"P3 Ei saa maalia  ";
		}

		wcout << endl;
		Sleep(500);

	}

	wcout << L"\n\n\n";

	wcout << setw(15) << left << L"Pelaaja:" << setw(10) << L"Maalit:" << L"\n\n";
	wcout << setw(15) << left << L"Pelaaja 1" << setw(10) << p1->getmaalit() << endl;
	wcout << setw(15) << left << L"Pelaaja 2" << setw(10) << p2->getmaalit() << endl;
	wcout << setw(15) << left << L"Pelaaja 3" << setw(10) << p3->getmaalit() << endl;

	wcout << "\n\n";

	//wcout << L"Pelaajan no. 1 maalit: " << p1->getmaalit() << L"\n" << L"Pelaajan no. 2 maalit: " <<  p2->getmaalit() << L"\n" << L"Pelaajan no. 3 maalit: " << p3->getmaalit() << L"\n";
	system("pause");
} 