// summaFOR.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(array<System::String ^> ^args)
{
	int k = 0, summa = 0;
    for(k=0;k<=200000;k++) {
		cout << summa;
		summa=summa+k;
		cout << " + "  << k << " = " << summa << "\n";
	}

	cout << "\n\nSumma on " << summa << "\n\n";
	system("pause");
    return 0;
}
