#include <iostream>
#include <string>
#include <fcntl.h>
#include <io.h>

using namespace std;

wstring yhdist�(wstring a, wstring b);

void main() {
	_setmode(_fileno(stdout), _O_U8TEXT);
	_setmode(_fileno(stdin), _O_U8TEXT);

	wstring input = L"";
	wstring input2 = L"";

	wcout << L"Nime� jokin punainen asia:\n";
	wcin >> input;
	wcout << L"Nime� nyt jokin el�in:\n";
	wcin >> input2;
	wcout << L"Varo! Takanasi saataa olla " << yhdist�(input2,input) << ".\n";

	system("pause");
}

wstring yhdist�(wstring a, wstring b) {
	return a+b;
}