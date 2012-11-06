#include <iostream>
#include <iomanip>

#include <list>
#include <algorithm>
#include <iterator>

#include <vector>

#include <string>

using namespace std;

struct aine {
	string nimi;
	vector<int> arvosanat;
};

void print(aine a);

int main() {
	aine ruotsi, fysiikka, biologia, mikalie;
	list<aine> aineet;

	ruotsi.nimi = "Ruotsi";
	ruotsi.arvosanat.push_back(7);ruotsi.arvosanat.push_back(8);ruotsi.arvosanat.push_back(7);ruotsi.arvosanat.push_back(9);

	fysiikka.nimi = "Fysiikka";
	fysiikka.arvosanat.push_back(9);fysiikka.arvosanat.push_back(8);

	biologia.nimi = "Biologia";
	biologia.arvosanat.push_back(6);

	mikalie.nimi = "joku muu";
	mikalie.arvosanat.push_back(3);

	aineet.push_back(ruotsi);
	aineet.push_back(fysiikka);
	aineet.push_back(biologia);
	aineet.push_back(mikalie);

	for_each(aineet.begin(),aineet.end(),print);

	cout << "\n";

	system("pause");

	return 0;
}

void print(aine a) {
	cout << setiosflags(ios::left) << setw(10) << a.nimi;
	for(int x = 0; x < a.arvosanat.size(); x++)
		cout << setiosflags(ios::left) << setw(3) << a.arvosanat.at(x); 
	cout << "\n";
}