#include <string>

#include "yritystili.hpp"

using namespace std;

Yritystili::Yritystili(std::string o, int k) {
	yritys = o;
	setKate(k);
}

bool Yritystili::setYritys(string y) {
	yritys = y;
	return true;
}

string Yritystili::getYritys() {
	return yritys;
}