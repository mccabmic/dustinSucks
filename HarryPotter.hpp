#ifndef HARRYPOTTER_CPP
#define HARRYPOTTER_CPP

#include "Character.hpp"
#include <iostream>

class HarryPotter:   public Character {

	protected:
		bool hasRes = true;

		Die potterDie = Die(6); // i love this variable name
		Die potterDie2 = Die(6);

	public:
		HarryPotter()
			: Character(10, 0) {}

		int attack(Character& target);
		void defend(int attackDamage);
		int status();

		virtual ~HarryPotter() {};
};

#endif // !HARRYPOTTER_CPP
