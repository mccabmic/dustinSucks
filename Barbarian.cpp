#include "Barbarian.hpp"

int Barbarian::attack(Character* target) {

	int attack1;
	int attack2;

	attack1 = barbDie1.roll();
	attack2 = barbDie2.roll();

	int totalDamage = attack1 + attack2;

	std::cout << "Barbarian attacks for " << attack1 << " and " << attack2 << std::endl;

	target->defend(totalDamage);

	return totalDamage;
	
}

void Barbarian::defend(int attackDamage) {

	int defend1;
	int defend2;

	defend1 = barbDie1.roll();
	defend2 = barbDie2.roll();

	cout << "Barbarian defended for " << defend1 << " and " << defend2 << std::endl;

	int totalDamage = attackDamage - armor - defend1 - defend2;
	
	if (totalDamage > 0) // character should not be able to get health back from defense
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
