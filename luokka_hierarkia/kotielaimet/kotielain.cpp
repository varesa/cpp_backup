#include <string>

#include "kotielain.hpp"


bool Kotielain::setNimi(std::string nNimi) {
	nimi = nNimi;
	return true;
}

std::string Kotielain::getNimi() {
	return nimi;
}