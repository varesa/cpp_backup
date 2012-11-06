#include <iostream>

using namespace std;

double summa(double x, double y);
double jaa(int num1, int num2, int * jakojaannos);

void main() {
	for(int k = 0;k<100;k++) {
		cout << "Lukujen " << k << " ja " << (double)k-(double)k/2 << " summa on " << summa((double) k, (double) k- (double) k/2) << endl;
	}

	int x = 0;
	cout << "\n\nOsaamäärä on " << jaa(11, 2, &x) << " ja jakojäännös on ";
	cout << x << "\n\n";

	system("pause");
}

double summa(double x, double y) {
	return x + y;
}

double jaa(int num1, int num2, int * jakojaannos) {
	*jakojaannos=num1 % num2;
	return num1 / num2;
}