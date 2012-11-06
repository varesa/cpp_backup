#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double paino, pituus, painoindeksi;

	cout << "Kuinka pitka olet? (cm)\n>";
	cin >> pituus;

	cout << "\nKuinka paljon painat (kg)?\n>";
	cin >> paino;

	painoindeksi = paino/((pituus/100)*(pituus/100));

	cout << setiosflags(ios::left) << "\n" << setw(9) << "Pituus" << setw(9) << "Paino" << "Painoindeksi\n";
	cout << setiosflags(ios::left) << setw(9) << pituus << setw(9) << paino << setprecision(2) << painoindeksi << "\n\n";

	system("pause");
	return 0;
}