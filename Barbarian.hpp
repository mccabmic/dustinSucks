#include "Character.hpp"
#include <iostream>


#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian:  public Character {
	protected:
		int defense = 5;
		

	public:
		int attack(Character* target);
		void defend(int attackDamage);
		int status();
	
};


#endif // !BARBARIAN_HPP


