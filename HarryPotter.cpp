#include "HarryPotter.hpp"

int HarryPotter::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}

	int attack1;
	int attack2;

	attack1 = potterDie.roll();
	attack2 = potterDie2.roll();

	int totalDamage = attack1 + attack2;

	std::cout << "Harry Potter attacks for " << attack1 << " and " << attack2 << std::endl;

	int effectiveDamage = target.defend(totalDamage);
	return effectiveDamage;

}

int HarryPotter::defend(int &attackDamage) {
	int defend1;
	int defend2;

	defend1 = potterDie.roll();
	defend2 = potterDie2.roll();

	cout << "Enemy Harry Potter defended for " << defend1 << " and " << defend2 << std::endl;

	int totalDamage = attackDamage - armor - defend1 - defend2;

	if (totalDamage > 0) { // character should not be able to get health back from defense
		hp = hp - totalDamage;
	}
	else {
		totalDamage = 0;
	}

	// check if Potter has self-resurrection
	if (hp <= 0 && hasRes) {
		hasRes = false;
		hp = 20;
	}

	return totalDamage;
}