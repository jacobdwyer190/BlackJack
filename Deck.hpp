#pragma once
#include "Card.cpp"
#include <stdlib.h>

class Deck {

private:
	int cardsLeft;
	int count = 0;
	//int totalCards = 52;
	Card cards[52];

public:
	Deck();
	void reset();
	void shuffle();
	Card dealCard();
	bool isEmpty();
	int getRemainingCards();
};