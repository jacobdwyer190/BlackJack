#include "Card.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

Card::Card(int type, int suit) {
	if (type < firstType || type > lastType) {
		std::cerr << "Invaild type\n";
	}
	if (suit < firstSuit || suit > lastSuit) {
		std::cerr << "Invaild Suit\n";
	}
	this->type = type;
	this->suit = suit;
}

bool Card::isAce() {
	if (type == ace) {
		return true;
	}
	return false;
}

bool Card::faceCard() {
	if (type == jack || type == queen || type == king) {
		return true;
	}
	return false;
}

std::string Card::toString() {
	return std::string(cardTypes[type] + "" + suitTypes[suit]);
}