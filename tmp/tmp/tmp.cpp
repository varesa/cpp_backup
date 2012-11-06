#include "tmp.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream ofs;
	ofs.open("file.txt");
	ofs << "romua";
	ofs.close();
	system("pause");

	ifstream ifs;
	ifs.open("file.txt");
	cout << "\n\nTiedostossa on " << ifs.rdbuf() << ".\n\n";
	ifs.close();

	system("pause");
}