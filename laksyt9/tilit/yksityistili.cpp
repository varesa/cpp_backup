#include <string>

#include "yksityistili.hpp"

using namespace std;

Yksityistili::Yksityistili(std::string o, int k) {
	omistaja = o;
	setKate(k);
}

bool Yksityistili::setOmistaja(string y) {
	omistaja = y;
	return true;
}

string Yksityistili::getOmistaja() {
	return omistaja;
}