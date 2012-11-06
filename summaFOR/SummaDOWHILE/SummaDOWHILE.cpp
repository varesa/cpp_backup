// summaFOR.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int k = 0, summa = 0;
    do {
		cout << summa;
		summa=summa+k;
		cout << " + "  << k << " = " << summa << "\n";
		k++;
	} 
	while (k<=20);

	cout << "\n\nSumma on " << summa << "\n\n";
	system("pause");
    return 0;
}
