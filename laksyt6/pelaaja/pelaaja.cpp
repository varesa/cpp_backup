
#define CHANCE 7

#include "pelaaja.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

bool doeshit() {
	return rand()%10+1 < CHANCE;
}

pelaaja::pelaaja(int maal, int syot) {
	maalit = maal;
	syotot = syotot;
}

void pelaaja::lauo() {
	if(doeshit())
		maalit += 1;
}

void pelaaja::setmaalit(int maal) {
	maalit = maal;
}

void pelaaja::setsyotot(int syot) {
	syotot = syot;
}

int pelaaja::getmaalit() {
	return maalit;
}
int pelaaja::getsyötöt() {
	return syotot;
}