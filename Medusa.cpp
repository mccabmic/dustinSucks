#include "Medusa.hpp"

int Medusa::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}

	int attack1;
	int attack2;

	attack1 = hitDie1.roll();
	attack2 = hitDie2.roll();

	int totalDamage = attack1 + attack2;

	if (totalDamage == 12){
		totalDamage = 999;
		std::cout << "Medusa used Glare! Massive damage! " << totalDamage << " Damage!" << std::endl;
	}

	else {
		std::cout << "Medusa attacks for " << attack1 << " and " << attack2 << std::endl;
		totalDamage = attack1 + attack2;
	}
	
	int effectiveDamage = target.defend(totalDamage);
	return effectiveDamage;

}

int Medusa::defend(int &attackDamage) {
	int defend1;

	defend1 = saveDie1.roll();

	std::cout << "Enemy Medusa " << "(hp: " << getHP() << " armor: " << getArmor()
		<< ") rolls a defense roll of " << defend1 << std::endl;

	int totalDamage = attackDamage - armor - defend1;

	if (totalDamage > 0) // character should not be able to get health back from defense
		hp = hp - totalDamage;
	else
		totalDamage = 0;

	return totalDamage;

}