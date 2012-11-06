
#include <iostream>

using namespace std;

int main() {
	int k = 1, tulo = 1;
	while (k <= 10) {
		cout << k << " ";
		k++;
	}

	cout << "\n";

	k = 1;
	while(k<=7) {
		tulo=tulo*k;
		k++;
	}

	cout << tulo << "\n";

	system("pause");
	return 0;
}