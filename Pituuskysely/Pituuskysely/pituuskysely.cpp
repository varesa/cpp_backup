#include <iostream>

using std::cout;
using std::cin;

int main() {

	int pituus = 0;

	while(pituus == 0) {
		cout << "Kuinka pitkä olet?\n";
		cin >> pituus;
		if(pituus > 10) {
			cout << "Olet " << pituus << " cm pitkä.\n";
		} else {
			cout << "Yritä uudelleen!!!";
		}
	}

	while(1) {}
	return 0;
}