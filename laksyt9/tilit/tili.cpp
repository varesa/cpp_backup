#include "tili.hpp"

Tili::Tili(int k) {
	kate = k;
}

bool Tili::setKate(int k) {
	kate = k;
	return true;
}

int Tili::getKate() {
	return kate;
}