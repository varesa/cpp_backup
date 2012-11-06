#include <iostream>
#include <utf8>
#include <ctime>
#include "pelaaja.h"


using namespace ev;
using namespace std;

int main() {
	utf8::use();
	srand ((unsigned)time(NULL));
	pelaaja * p1 = new pelaaja();
	pelaaja * p2 = new pelaaja();
	pelaaja * p3 = new pelaaja();

	for (int x = 1; x <= 10; x++) {
		p1->lauo();
		p2->lauo();
		p3->lauo();
	}

	wcout << L"Pelaajan no. 1 maalit: " << p1->getmaalit() << L"\n" << L"Pelaajan no. 2 maalit: " <<  p2->getmaalit() << L"\n" << L"Pelaajan no. 3 maalit: " << p3->getmaalit() << L"\n";
	system("pause");
} 