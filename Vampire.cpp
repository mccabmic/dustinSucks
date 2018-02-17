#include "Vampire.hpp"

int Vampire::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}

	int attack = hitDie.roll();

	std::cout << "Vampire attacks for " << attack << std::endl;

	int effectiveDamage = target.defend(attack);
	return effectiveDamage;
}

int Vampire::defend(int &attackDamage) {

	int defend1;
	defend1 = saveDie.roll();

	std::cout << "Enemy Vampire " <<"(hp: " << getHP() << " armor: " << getArmor()
		<< ") rolls a defense roll of " << defend1 << std::endl;

	int totalDamage = attackDamage - armor - defend1;

	Die coinToss = Die(2);

	int roll = coinToss.roll();

	if (totalDamage > 0) {
		if (roll == 1) {
			hp = hp - totalDamage; //character should not be able to get health back from defense
		}
		else {
			totalDamage = 0;
		}
	}
	return totalDamage;
}