#include <utf8>
#include <iostream>
#include "ihminen.h"

using namespace std;

int main() {

	ihminen * i1 = new ihminen(50,200);

	wcout << i1->getPaino() << L" " << i1->getPituus() << L" " << i1->getPi() << L"\n";

	system("pause");

	return 0;
}