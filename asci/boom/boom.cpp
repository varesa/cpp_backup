#include <iostream>
#include <windows.h>

using namespace std;


void main() {

	Sleep(1100);
	cout << "\n    __\n  //  \\\\ \n      ||\n      //\n    ||  \n      \\\\ \n      ||\n  \\\\__//\n\n\n";

	Sleep(1100);
	system("cls");
	cout << "\n     ___\n  //    \\\\ \n         ||\n    ____//\n  //\n  ||\n   \\\\___//\n\n\n";

	Sleep(1100);
	system("cls");
	cout << "\n    111\n    111\n    111\n    111\n    111\n    111\n\n\n";

	Sleep(1100);
	system("cls");
	cout << "\n  ___       ___        ___        __          __\n |    \\    / _ \\      / _ \\      /"
		"  \\        /  \\ \n | () |   / / \\ \\    / / \\ \\    / /\\ \\      / /\\ \\ \n |   /   | |   | |  |"
		"|   | |  / /  \\ \\    / /  \\ \\ \n |   \\   | \\   / |  | \\   / / / /    \\ \\  / /    \\ \\ \n |"
		" () |   \\ \\_/  /   \\ \\_/ / / /      \\ \\/ /      \\ \\ \n |____/    \\___/      \\___/ /_/        \\__/        \\_\\ \n";
	Sleep(500);

	ExitWindowsEx(EWX_LOGOFF, SHTDN_REASON_MINOR_CORDUNPLUGGED); 
} 