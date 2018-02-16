#include "HarryPotter.hpp"

int HarryPotter::attack(Character& target) {
	int attack1;
	int attack2;

	attack1 = potterDie.roll();
	attack2 = potterDie2.roll();

	int totalDamage = attack1 + attack2;

	std::cout << "Harry Potter attacks for " << attack1 << " and " << attack2 << std::endl;

	target.defend(totalDamage);

	return totalDamage;

}

void HarryPotter::defend(int attackDamage) {
	int defend1;
	int defend2;

	defend1 = potterDie.roll();
	defend2 = potterDie2.roll();

	cout << "Harry Potter defended for " << defend1 << " and " << defend2 << std::endl;

	int totalDamage = attackDamage - armor - defend1 - defend2;

	if (totalDamage > 0) // character should not be able to get health back from defense
		hp = hp - totalDamage;

	if (hp <= 0 && hasRes) {
		hasRes = false;
		hp = 20;
	}

}

int HarryPotter::status() {
	if (isDead) {
		return 0;
	}
	return hp;
}