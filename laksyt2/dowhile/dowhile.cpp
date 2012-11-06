#include <iostream>

using namespace std;

int main() {
	int k = 1, tulo = 1;

	do {
		cout << k << " ";
		k++;
	} while (k <= 10);

	cout << "\n";

	k = 1;
	do {
		tulo=tulo*k;
		k++;
	} while(k<=7);

	cout << tulo << "\n";

	system("pause");
	return 0;
}