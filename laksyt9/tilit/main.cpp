#include "yritystili.hpp"
#include "yksityistili.hpp"

#include <iostream>

using namespace std;

int main() {
	Yritystili t1 ("Yritys Oy",79000);
	Yksityistili t2("Sukunimi Etunimi",1290);

	cout << t1.getYritys() << " : " << t1.getKate() << "\n" << t2.getOmistaja() << " : " << t2.getKate() << "\n\n";
	
	system("pause");

	return 0;
}