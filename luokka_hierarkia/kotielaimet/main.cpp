#include <iostream>

#include "sika.hpp"
#include "lammas.hpp"


//#include <string>
//#include <Windows.h>

using namespace std;

int main() {

	Sika x;
	Lammas y;

	x.setNimi("Mara");
	cout << x.rohki();

	y.setNimi("Matti");

	system("pause");

	return 1;
}