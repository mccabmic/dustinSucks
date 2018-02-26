/*************************
Author:Michael McCabe
Date: February 18, 2018
IDE: Visual Studio
**************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Character.hpp"
#include <vector>

class BlueMen : public Character {
protected:
	Die hitDie1 = Die(10);
	Die hitDie2 = Die(10);

	vector<Die> hand;

public:
	int attack(Character& target);
	int defend(int& attackDamage);
	BlueMen()
		: Character(12, 3) {
		for (int i = 0; i < 3; i++)
			hand.push_back(Die(6)); 
			}

	virtual ~BlueMen() {};
};

#endif // !BLUEMEN_HPP
