#include "Agility.hpp"
#include "Strength.hpp"
#include "Intelligence.hpp"

#include <cstdlib>

Strength::Strength(int strength, int agility, int intelligence)
{
	this->strength = strength;
	this->agility = agility;
	this->intelligence = intelligence;
}

Card* Strength::call_shenanigans(Card* other)
{
	return other->fight(this);
}

Card* Strength::fight(Agility* other)
{
	this->agility+=10;
	if(this->agility > MAX)
	{
		this->agility = MAX;
	}
	return this;
}

Card* Strength::fight(Intelligence* other)
{
	if(this->agility > other->agility)
	{
		this->strength+=10;
		if(this->strength > MAX)
		{
			this->strength = MAX;
		}

		return this;
	}
	else if(this->agility < other->agility)
	{
		other->strength+=10;
		if(other->strength > MAX)
		{
			other->strength = MAX;
		}
		return other;
	}
}

Card* Strength::fight(Strength* other)
{
	if((this->intelligence + this->agility) > (other->intelligence + other->agility))
	{
		this->intelligence+=10;
		if(this->intelligence > MAX)
		{
			this->intelligence = MAX;
		}
		return this;
	}
	else if((this->intelligence + this->agility) < (other->intelligence + other->agility))
	{
		other->intelligence+=10;
		if(other->intelligence > MAX)
		{
			other->intelligence = MAX;
		}
		return other;
	}
	else 
	{
		int winner = rand() % 2;
		if(winner = 0)
		{
			return this;
		}
		else return other;
	}
}
