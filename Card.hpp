#pragma once
#include <string>

class Card {

private:
	int type, suit;
	int firstType = 1;
	int lastType = 13;
	int firstSuit = 0;
	int lastSuit = 3;
	int ace = 1;
	int jack = 11;
	int queen = 12;
	int king = 13;
	int clubs = 0;
	int diamonds = 1;
	int hearts = 2;
	int spades = 3;

	std::string cardTypes[14] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	std::string suitTypes[4] = {"C","D","H","S"};

public:
	Card();
	Card(int type, int suit);
	bool isAce();
	bool faceCard();
	std::string toString();
	~Card();
};