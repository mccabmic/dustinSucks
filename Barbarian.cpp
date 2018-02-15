#include "Barbarian.hpp"

int Barbarian::attack(Character* target) {
	int attack = 10;
	target->defend(attack);
	return attack;
}

void Barbarian::defend(int attackDamage) {
	int totalDamage = attackDamage - armor;	
	hp = hp - totalDamage;

	if (hp <= 0) {	
		std::cout << "Dead!" << std::endl;
		isDead = true;
	}
}

int Barbarian::status(){
	if (isDead) {
		return 0;
	}
	return hp;
}
