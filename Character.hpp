#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Die.hpp"

class Character {
	protected:
		int hp = 0; //Strength Points;
		int armor = 0;
		bool isDead = false;
	public:
		Character(int health, int defense): hp(health), armor(defense) {}
		virtual ~Character() {}

		virtual int attack(Character& target) = 0;
		virtual void defend(int attackDamage) = 0;
		virtual int status() = 0;
};


#endif // !CHARACTER_HPP


