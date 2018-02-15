#include "Character.hpp"
#include <iostream>


#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian:  public Character {

	public:
		int attack(Character* target);
		void defend(int attackDamage);
		int status();
		Barbarian()
			: Character(12, 0){}
				
		~Barbarian() { std::cout << "I am defeated!" << std::endl; };
	
};


#endif // !BARBARIAN_HPP


