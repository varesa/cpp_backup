#include "noppa.hpp"
#include <ctime>
#include <cstdlib>

Noppa::Noppa() {
	srand((unsigned)time(NULL));
}

int Noppa::Heitä() {
	return  rand()%6 + 1;
}