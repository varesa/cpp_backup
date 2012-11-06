#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;

int main()
{
	int vastaus = 0;
    cout << "Kuinka monta tuntia istut päivässä tietokoneen ääressä?\n>";
	cin >> vastaus;
	cout << "\nIstut siis " << vastaus << " tuntia päivässä tietokoneella.\nTiesitkö että se tekee " << vastaus * 365 << " tuntia vuodessa?\n\nPaina mitä tahansa lopettaaksesi...";

	HANDLE inputHandle = GetStdHandle(STD_INPUT_HANDLE);
    BOOL b = SetConsoleMode(inputHandle, 0);

	cin.sync();
	getchar();
    return 0;
}
