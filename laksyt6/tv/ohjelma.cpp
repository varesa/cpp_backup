#include "ohjelma.h"

#include <string>

using namespace std;

bool ohjelma::setNimi(string nimi) {
	OhjNimi = nimi;
	return true;
}

bool ohjelma::setKesto(int arv) {
		OhjKesto = arv;
		return true;
}

string ohjelma::getNimi() {
	return OhjNimi;
}

int ohjelma::getKesto() {
	return OhjKesto;
}

bool ohjelma::kannattaakoKatsoa() {
	if(OhjKesto > 400)
		return false;
}