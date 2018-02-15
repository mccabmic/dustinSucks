#ifndef DIE_HPP
#define DIE_HPP

/*************************
Author:Michael McCabe
Date: Janaury 26, 2018
IDE: Visual Studio
Die constructs based on a given number of sides. Currently implemented is one child, LoadedDie
Die  can roll, which generates a random number, seeded based on time at construction
**************************/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Die {
protected:
	int sides;

public:
	Die(int sides);
	virtual int roll();
	virtual bool isLoaded();

};

#endif // !DIE_HPP