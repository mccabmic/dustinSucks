#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"

class Vampire:	public Character {
	protected:
		Die hitDie = Die(12);
		Die saveDie = Die(6);

	public:
		Vampire()
			:Character(18, 1) {}
		int attack(Character& attackTarget);
		int defend(int &attackDamage);
};


#endif // !VAMPIRE_HPP
