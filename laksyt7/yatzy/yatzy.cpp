#include <iostream>
#include <iomanip>

#include "noppa.hpp"

using namespace std;

Noppa noppa1, noppa2, noppa3;
int sluku1, sluku2, sluku3;

int main() { 

	for (int x = 1; x <= 2; x++) {

		sluku1 = noppa1.Heitä();
		sluku2 = noppa2.Heitä();
		sluku3 = noppa3.Heitä();

		cout << left << setw(5) << sluku1 << setw(5) << sluku2 << setw(5) << sluku3;
		if (sluku1 == sluku2 && sluku2 == sluku3) {
			cout << "3 Samaa!";
		} else {
			if ( sluku1 == sluku2 || sluku2 == sluku3 ||sluku1 == sluku3 ) {
				wcout << "2 Samaa!"; 
			}
		}

		cout << endl;


	}

	system("pause");
	return 0;
}