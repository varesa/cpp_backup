#include <iostream>
#include <fstream>
#include <string>

#include "lammas.hpp"
#include "sika.hpp"

using namespace std;

int main() {

	Lammas l;
	l.setName("Lammas");
	l.setVillanmaara(2);
	l.setVari("valkoinen");
	l.setIka(2);

	//cout << l.getName() << ", villaa: " << l.getVillanmaara() << " kg\n";

	//Sika s;
	//s.setName("Sika");
	//cout << s.getName() << " sanoo: " << s.rohki() << "\n\n";

	ofstream of;
	of.open("lammas.txt");
	of << "Lammas:\nNimi:   " << l.getName() << "\nVari:   " << l.getVari() << "\nVillaa: " << l.getVillanmaara() << " kg\nIka:    " << l.getIka() << " vuotta";

	system("pause");

	return 0;
}

