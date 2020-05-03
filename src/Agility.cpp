#include "Agility.hpp"
#include "Strength.hpp"
#include "Intelligence.hpp"

#include <cstdlib>

Agility::Agility(int strength, int agility, int intelligence)
{
	this->strength = strength;
	this->agility = agility;
	this->intelligence = intelligence;
}

Card* Agility::call_shenanigans(Card* other)
{
	return other->fight(this);
}

Card* Agility::fight(Agility*other)
{
	if((this->intelligence + this->strength) > (other->intelligence + other->strength))
	{
		this->intelligence+=5;
		this->strength+=5;
		if(this->intelligence > MAX)
		{
			this->intelligence = MAX;
		}
		if(this->strength > MAX)
		{
			this->strength = MAX;
		}
		return this;
	}
	else if((this->intelligence + this->strength) < (other->intelligence + other->strength))
	{
		other->intelligence+=5;
		other->strength+=5;
		if(other->intelligence > MAX)
		{
			other->intelligence = MAX;
		}
		if(other->strength > MAX)
		{
			other->strength = MAX;
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

Card* Agility::fight(Intelligence* other)
{
	if(this->strength > other->strength)
	{
		this->intelligence+=10;
		this->agility+=10;
		if(this->intelligence > MAX)
		{
			this->intelligence = MAX;
		}
		if(this->agility > MAX)
		{
			this->agility = MAX;
		}
		return this;
	}
	else if(this->strength < other->strength)
	{
		other->intelligence+=10;
		other->agility+=10;
		if(other->intelligence > MAX)
		{
			other->intelligence = MAX;
		}
		if(other->agility > MAX)
		{
			other->agility = MAX;
		}
		return other;
	}
}

Card* Agility::fight(Strength* other)
{
	other->agility+=10;
	return other;
}
