#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;

int main()
{
	int vastaus = 0;
    cout << "Kuinka monta tuntia istut p�iv�ss� tietokoneen ��ress�?\n>";
	cin >> vastaus;
	cout << "\nIstut siis " << vastaus << " tuntia p�iv�ss� tietokoneella.\nTiesitk� ett� se tekee " << vastaus * 365 << " tuntia vuodessa?\n\nPaina mit� tahansa lopettaaksesi...";

	HANDLE inputHandle = GetStdHandle(STD_INPUT_HANDLE);
    BOOL b = SetConsoleMode(inputHandle, 0);

	cin.sync();
	getchar();
    return 0;
}
