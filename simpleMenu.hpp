/*************************
Author:Michael McCabe
Date: February 11, 2018
IDE: Visual Studio
**************************/

#ifndef SIMPLEMENU_HPP
#define SIMPLEMENU_HPP

#include <string>
#include <iostream>
#include <sstream>

#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Character.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

class simpleMenu {
private:
	enum FIGHTERS{BARBARIAN = 1, BLUEMEN, HARRYPOTTER, MEDUSA, VAMPIRE};

	Character *firstChoice;
	Character *secondChoice;
	
public:
	simpleMenu();
	void printMenu(); // prints options
	void getChoice(); // handles option choice

	Character* selectFighter();
	
	int getInt(const std::string p); // input validation
	int getAnyInt(const std::string p);

};


#endif // !SIMPLEMENU_HPP

