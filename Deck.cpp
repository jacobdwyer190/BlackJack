#include "Deck.hpp"

Deck::Deck(){
	//Card cards[52];
	for (int suit = 0; suit <= 3; suit++) {
		for (int type = 0; type <= 13; type++) {
			cards[count] = new Card(type, suit);
		}
	}
}