/*************************
Author:Michael McCabe
Date: February 18, 2018
IDE: Visual Studio
**************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "Character.hpp"
#include <iostream>

class Barbarian:  public Character {
	protected:

		Die barbDie1 = Die(6);
		Die barbDie2 = Die(6);

	public:
		int attack(Character& target);
		int defend(int& attackDamage);
		Barbarian()
			: Character(12, 0){}
				
		virtual ~Barbarian() {};
};
#endif // !BARBARIAN_HPP


