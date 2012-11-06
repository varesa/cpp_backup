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

	int OldMaalit = 0;

	for (int x = 1; x <= 15; x++) {
		OldMaalit = p1->getmaalit();
		p1->lauo();
		if(p1->getmaalit() != OldMaalit) {
			if(OldMaalit <= 5)
				wcout << left << setw(36) << L"Oho! Tuli maali!" << L" Maalit: " << p1->getmaalit() << L"\n";
			else
				wcout << left << setw(36) << L"Ja taas tulee maali!" << L" Maalit: " << p1->getmaalit() << L"\n";
 		} else {
			if(OldMaalit <= 5)
				wcout << left << setw(36) << L"Kun se ei uppoo, niin se ei uppoo…" << L" Maalit: " << p1->getmaalit() << L"\n";
			else
				wcout << left << setw(36) << L"Oho! Se meni huti." << L" Maalit: " << p1->getmaalit() << L"\n";
		}
		Sleep(500);

	}

	//wcout << L"Pelaajan no. 1 maalit: " << p1->getmaalit() << L"\n" << L"Pelaajan no. 2 maalit: " <<  p2->getmaalit() << L"\n" << L"Pelaajan no. 3 maalit: " << p3->getmaalit() << L"\n";
	system("pause");
} 