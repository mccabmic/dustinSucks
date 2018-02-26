/*************************
Author:Michael McCabe
Date: Janaury 26, 2018
IDE: Visual Studio
Die constructs based on a given number of sides. Currently implemented is one child, LoadedDie
Die  can roll, which generates a random number, seeded based on time at construction
**************************/

#include "Die.hpp"

Die::Die(int s) {
	sides = s;
}

bool Die::isLoaded() {
	return false;
}
int Die::roll() {
	return rand() % sides + 1;
}

