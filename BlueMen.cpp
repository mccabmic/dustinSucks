#include "BlueMen.hpp"

int BlueMen::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}

	int attack1;
	int attack2;

	attack1 = hitDie1.roll();
	attack2 = hitDie2.roll();

	int totalDamage = attack1 + attack2;

	std::cout << "BlueMen attacks for " << attack1 << " and " << attack2 << std::endl;

	int effectiveDamage = target.defend(totalDamage);
	return effectiveDamage;

}

int BlueMen::defend(int &attackDamage) {
	int defense = 0;

	for (unsigned i = 0; i < hand.size(); i++) {
		int roll = hand.at(i).roll();
		std::cout << "Enemy Blue men " << "(hp: " << getHP() << " armor: " << getArmor()
			<< ") rolls a defense roll of " << roll << std::endl;

		defense = +roll;
	}

	int totalDamage = attackDamage - armor - defense;

	if (totalDamage > 0) { // character should not be able to get health back from defense
		hp = hp - totalDamage;
		attackDamage = totalDamage;
	}
	else {
		attackDamage = 0;
	}

	if (hp <= 8 && hp > 4) {
		if (hand.size() >= 3)
			hand.pop_back();
	}

	if (hp <= 4 && hp > 0) {
		if (hand.size() >= 3) {
			hand.pop_back();
			hand.pop_back();
		}
		else {
			hand.pop_back();
		}
	}

	return attackDamage;

}