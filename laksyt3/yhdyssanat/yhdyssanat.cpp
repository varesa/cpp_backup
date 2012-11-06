#include <iostream>
#include <string>
#include <fcntl.h>
#include <io.h>

using namespace std;

wstring yhdistä(wstring a, wstring b);

void main() {
	_setmode(_fileno(stdout), _O_U8TEXT);
	_setmode(_fileno(stdin), _O_U8TEXT);

	wstring input = L"";
	wstring input2 = L"";

	wcout << L"Nimeä jokin punainen asia:\n";
	wcin >> input;
	wcout << L"Nimeä nyt jokin eläin:\n";
	wcin >> input2;
	wcout << L"Varo! Takanasi saataa olla " << yhdistä(input2,input) << ".\n";

	system("pause");
}

wstring yhdistä(wstring a, wstring b) {
	return a+b;
}