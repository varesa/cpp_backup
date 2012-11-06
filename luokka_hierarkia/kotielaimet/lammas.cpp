#include "lammas.hpp"

bool Lammas::setVillanmaara(int nVillanmaara) {
	villanmaara = nVillanmaara;
	return true;
}

int Lammas::getVillanmaara() {
	return villanmaara;
}

bool Lammas::isKerittavissa() {
	return kerittavissa;
}

bool Lammas::setKerittavissa (bool nKerittavissa) {
	kerittavissa = nKerittavissa;
	return true;
}
