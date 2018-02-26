/*************************
Author:Michael McCabe
Date: February 18, 2018
IDE: Visual Studio
**************************/
#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character {
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
