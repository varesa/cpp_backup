#include "noppa.hpp"
#include <ctime>
#include <cstdlib>

Noppa::Noppa() {
	srand((unsigned)time(NULL));
}

int Noppa::Heit�() {
	return  rand()%6 + 1;
}