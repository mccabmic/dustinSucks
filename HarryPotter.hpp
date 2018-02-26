/*************************
Author:Michael McCabe
Date: February 18, 2018
IDE: Visual Studio
**************************/

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
		int defend(int& attackDamage);

		virtual ~HarryPotter() {};
};

#endif // !HARRYPOTTER_CPP
