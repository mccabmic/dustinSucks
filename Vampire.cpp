#include "Vampire.hpp"

int Vampire::attack(Character& target) {

	if (&target == nullptr) {
		return 0;
	}

	int attack = hitDie.roll();

	std::cout << "Vampire attacks for " << attack << "damage!" << std::endl;
	target.defend(attack);
	return attack;


}

void Vampire::defend(int attackDamage) {

	int defend1;
	defend1 = saveDie.roll();

	int totalDamage = attackDamage - armor - defend1;

	Die coinToss = Die(2);

	int roll = coinToss.roll();
	if (roll == 1) {
		std::cout << "Roll was: " << roll << std::endl;
		if (totalDamage > 0) // character should not be able to get health back from defense
			hp = hp - totalDamage;
	}
	else {
		std::cout << "Roll was: " << roll << std::endl;
		std::cout << "No damage taken!" << std::endl;
	}

}




int Vampire::status(){
	if (isDead) {
		return 0;
}
	else
		return hp;
}