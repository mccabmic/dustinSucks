#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character {


//Medusa Attack 2d6 Defense 1d6 Armor 3 HP8
//Glare: If a Medusa rolls a 12 when attacking then the target instantly gets turned into stone and Medusa wins! 
//If Medusa uses Glare on Harry Potter on his first life, then Harry Potter comes back to life.
	protected:

		Die hitDie1 = Die(6);
		Die hitDie2 = Die(6);
		Die saveDie1 = Die(6);

	public:
		int attack(Character& target);
		int defend(int& attackDamage);
		Medusa()
			: Character(8, 3) {}

		virtual ~Medusa() {};

};

#endif // !MEDUSA_HPP
