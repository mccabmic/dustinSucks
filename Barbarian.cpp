#include "Barbarian.hpp"

int Barbarian::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}


	int attack1;
	int attack2;

	attack1 = barbDie1.roll();
	attack2 = barbDie2.roll();

	int totalDamage = attack1 + attack2;

	std::cout << "Barbarian attacks for " << attack1 << " and " << attack2 << std::endl;

	int effectiveDamage = target.defend(totalDamage);
	return effectiveDamage;
	
}

int Barbarian::defend(int &attackDamage) {

	int defend1;
	int defend2;

	defend1 = barbDie1.roll();
	defend2 = barbDie2.roll();
	
	std::cout << "Enemy Barbarian " << "(hp: " << getHP() << " armor: " << getArmor()
		<< ") rolls a defense roll of " << defend1 << " and " << defend2 << std::endl;

	int totalDamage = attackDamage - armor - defend1 - defend2;
	
	if (totalDamage > 0) { // character should not be able to get health back from defense
		hp = hp - totalDamage;
	}
	else {
		totalDamage = 0;
	}

	return totalDamage;
}
