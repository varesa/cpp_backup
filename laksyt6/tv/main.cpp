#include "ohjelma.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int wmain() {
	ohjelma ohj1;
	ohjelma ohj2;
	ohjelma	ohj3;


	ohj1 = ohjelma("Ohjelma 1",120);

	ohj2 = ohjelma("Ohjelma 2");
	ohj2.setKesto(1000);

	ohj3.setNimi("Ohjelma 3");
	ohj3.setKesto(200);

	cout << ohj1.getNimi() << "\t( " << setw(4) << ohj1.getKesto() << " min )\t";
	if (ohj1.kannattaakoKatsoa())
		cout << "- Kannattaa katsoa!\n";
	else 
		wcout << L"Ei kannata katsoa, liian pitkä...\n";

	cout << ohj2.getNimi() << "\t( " << setw(4) << ohj2.getKesto() << " min )\t";
	if (ohj2.kannattaakoKatsoa())
		cout << "- Kannattaa katsoa!\n";
	else 
		wcout << L"- Ei kannata katsoa, liian pitkä...\n";

	cout <<  ohj3.getNimi() << "\t( " << setw(4) << ohj3.getKesto() << " min )\t";
	if (ohj3.kannattaakoKatsoa())
		cout << "- Kannattaa katsoa!\n";
	else 
		wcout << L"Ei kannata katsoa, liian pitkä...\n";

	system("pause");
}