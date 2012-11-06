#include <iostream>
#include <fstream>
#include <ctime>
#include "pelaaja.h"


using namespace std;

int main() {
	srand ((unsigned)time(NULL));
	pelaaja * p1 = new pelaaja();
	pelaaja * p2 = new pelaaja();
	pelaaja * p3 = new pelaaja();

	for (int x = 1; x <= 10; x++) {
		p1->lauo();
		p2->lauo();
		p3->lauo();
	}

	ofstream ofile;
	ofile.open("pelaajat.txt");

	ofile << "Pelaajan no. 1 maalit: " << p1->getmaalit() << "\n" << "Pelaajan no. 2 maalit: " <<  p2->getmaalit() << "\n" << "Pelaajan no. 3 maalit: " << p3->getmaalit() << "\n";
	ofile.close();
	system("pause");
} 