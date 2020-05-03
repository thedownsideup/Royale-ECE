#ifndef INTELIGENCE_H
#define INTELIGENCE_H

#include "Card.hpp"

const int MAX = 100;

class Intelligence : public Card
{
public:
	Intelligence(int strength, int agility, int intelligence);
	Card* call_shenanigans(Card* other);
	Card* fight(Agility* other);
	Card* fight(Intelligence* other);
	Card* fight(Strength* other);
};

#endif
