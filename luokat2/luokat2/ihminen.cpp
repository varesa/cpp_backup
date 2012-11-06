#include "ihminen.h"

ihminen::ihminen(int pain, int pit) {
	paino = pain;
	pituus = pit;
}

void ihminen::setPaino(int p) {
	paino = p;
}

void ihminen::setPituus(int p) {
	pituus = p;
}

int ihminen::getPaino() {
	return paino;
}

int ihminen::getPituus() {
	return pituus;
}

int ihminen::getPi() {
	return paino / ((pituus/100)*(pituus/100));
}