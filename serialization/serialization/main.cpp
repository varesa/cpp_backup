#include <iostream>
#include <list>
#include <string>
#include <fstream>

#include <algorithm>
//#include <functional>
//#include <iterator>

using namespace std;

void print(string str);

void main() {
	list<string> lista;
	lista.push_back("1");
	lista.push_back("2");
	lista.push_back("3");

	char text[] = "123";

//	for_each(lista.begin(), lista.end(), print);

	ofstream ostream("remove.me", ios::binary);

	ostream.write( (char *) &text, sizeof(text));

//	list<string> lista2;
	//text = "321";

	strcpy(text,"321");

	ifstream istream("remove.me", ios::binary);

	istream.read( (char *) &text,sizeof(text));

	cout << text;

//	for_each(lista2.begin(), lista2.end(), print);

	system("pause");
}

void print(string str) {
	cout << str << "\n";
}