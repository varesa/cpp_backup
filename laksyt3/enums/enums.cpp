#include <iostream>

#include <fcntl.h>
#include <io.h>

using namespace std;

void main()
{ 
	_setmode(_fileno(stdout), _O_U8TEXT);
	_setmode(_fileno(stdin), _O_U8TEXT);

	enum VKP { Maanantai = 1, Tiistai, Keskiviikko, Torstai, Perjantai, Lauantai, Sunnuntai};
	VKP vkp;
	int Viikonpv = Torstai;
	wcout << L"Tänään on " << Viikonpv << endl;
	vkp = Tiistai;
	wcout << L"Tänään on " << vkp << endl;
	vkp=Sunnuntai;
	wcout << L"Tänään on " << vkp << endl;
	if(vkp == Sunnuntai) wcout << L"Sunnuntai" << endl;
	vkp = VKP(4);
	if (vkp == Torstai) wcout << L"Torstai" << endl;
	system("pause");
}