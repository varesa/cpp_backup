#include <iostream>

using std::cout;
using std::cin;

int main() {

	int pituus = 0;

	while(pituus == 0) {
		cout << "Kuinka pitk� olet?\n";
		cin >> pituus;
		if(pituus > 10) {
			cout << "Olet " << pituus << " cm pitk�.\n";
		} else {
			cout << "Yrit� uudelleen!!!";
		}
	}

	while(1) {}
	return 0;
}