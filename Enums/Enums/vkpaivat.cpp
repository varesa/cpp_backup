#include <iostream>
#include <

using namespace std;

int main() {
	enum vkpv {Maanantai = 1,Tiistai,Keskiviikko,Torstai,Perjantai,Lauantai,Sunnuntai};
	int test = Maanantai;
	vkpv pv = Tiistai;
	cout << Keskiviikko << "\n" << test << "\n" << pv; 
	system("pause");
	return 0;
}