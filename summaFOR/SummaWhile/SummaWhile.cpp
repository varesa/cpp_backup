// summaFOR.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(array<System::String ^> ^args)
{
	int k = 0; 
	long summa = 0;
    while(true) {
		cout << summa;
		summa=summa*2;
		cout << " + "  << k << " = " << summa << "\n";
		k++;
	}

	cout << "\n\nSumma on " << summa << "\n\n";
	system("pause");
    return 0;
}
