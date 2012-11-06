
#include <iostream>

using namespace std;

int main() {
	int k, tulo = 1;
	for (k=1;k<=10;k++) {
		cout << k << " ";
	}

	cout << "\n";

	int tavoite = 7;


	cout << "Lukujen ";
	for (k=1;k<=tavoite-1;k++) {
		tulo=tulo*k;
		cout << k << " ";
	}
	tulo=tulo*tavoite;
	cout << "ja " << tavoite << " tulo on " << tulo << ".\n";

	system("pause");
	return 0;
}