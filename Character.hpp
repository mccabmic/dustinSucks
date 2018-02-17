#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Die.hpp"

class Character {
	protected:
		int hp = 0; //Strength Points;
		int armor = 0;
	public:
		Character(int health, int defense): hp(health), armor(defense) {}
		virtual ~Character() {}

		virtual int attack(Character& target) = 0;
		virtual int defend(int& attackDamage) = 0;
		int getHP(){ if (hp <= 0) {
						return 0;
						}
						return hp; }
					
		int getArmor(){ return armor; }
		bool isAlive() { if (getHP()) { return true; } return false; };

};


#endif // !CHARACTER_HPP


