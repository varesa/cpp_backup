#include <iostream>
#include <string>
#include <list>
#include <iterator>

#include <algorithm>

#include <fcntl.h>
#include <io.h>

using namespace std;

void print(wstring ruoka);

void main() {
	list<wstring> ruoat;

	bool jatka = true, first = true;
	wstring input = L"";

	_setmode(_fileno(stdout), _O_U8TEXT);
	_setmode(_fileno(stdin), _O_U8TEXT);

	while(jatka) {

		if(first)
			wcout << L"Mit� olet sy�nyt?(Yksi asia) Jos et ole sy�nyt mit��n,\nj�t� tyhj�ksi ja paina enter.\n";
		else
			wcout << L"Mit� muuta olet sy�nyt?(Yksi asia) Jos et ole sy�nyt mit��n muuta,\nj�t� tyhj�ksi ja paina enter.\n"; first = false;
		
		getline(wcin,input);

		if (input != L"")
			ruoat.push_front(input);
		else
			jatka = false;
	}
	ruoat.reverse();
	wcout << L"\nAsioita joita olet sy�nyt:\n";
	for_each(ruoat.begin(),ruoat.end(),print);

	system("pause");
	return;
}

void print(wstring ruoka) {
	wcout << ruoka << "\n";
}