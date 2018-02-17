/*************************
Author:Michael McCabe
Date: February 11, 2018
IDE: Visual Studio
**************************/

#include "simpleMenu.hpp"

simpleMenu::simpleMenu() {
	printMenu();
}

void simpleMenu::printMenu() {
	std::cout << "--------ARENA MASTER----------" << std::endl;
	std::cout << "[1] Play game" << std::endl;
	std::cout << "[2] Quit" << std::endl;
	
	int input = getInt(">>>>>>");

	while (input != 1 && input != 2) {
		std::cout << "Please select either [1] to play or [2] to quit." << std::endl;
		input = getInt(">>>>>>");
	}
	
	if (input == 1)
		getChoice();
}

Character* simpleMenu::selectFighter() {
	std::cout << "[1] Barbarian" << std::endl;
	std::cout << "[2] BlueMen" << std::endl;
	std::cout << "[3] Harry Potter" << std::endl;
	std::cout << "[4] Medusa" << std::endl;
	std::cout << "[5] Vampire" << std::endl;

	int input = getInt("Please make your selection: ");

	while (input < 1 && input > 5) {
		input = getInt("Please reselect: ");
	}

	if (input == BARBARIAN) {
		return new Barbarian;
	}
	else if (input == BLUEMEN) {
		return new BlueMen;
	}
	else if (input == HARRYPOTTER) {
		return new HarryPotter;
	}
	else if (input == MEDUSA) {
		return new Medusa;
	}
	else if (input == VAMPIRE) {
		return new Vampire;
	}
}

void simpleMenu::getChoice() {

	// Explain that they will choose between a select of fighters
	
	std::cout << "First fighter choice: " << std::endl;
	firstChoice = selectFighter();

	std::cout << "Second fighter choice: " << std::endl;
	secondChoice = selectFighter();

	int round = 1;
	do {
		std::cout << "---------Round " << round << "--------" << std::endl;
		std::cout << "First fighter goes first" << std::endl;
		std::cout << "Total effective damage: " << firstChoice->attack(*secondChoice) << std::endl;
		std::cout << "Enemy now has: " << secondChoice->getHP() << " hp remaining." << std::endl;

		if (!secondChoice->isAlive()) {
			break;
		}
		std::cout << "Second fighter goes next" << std::endl;
		std::cout << "Total effective damage: " << secondChoice->attack(*firstChoice) << std::endl;
		std::cout << "Enemy now has: "<<  firstChoice->getHP() << " hp remaining." << std::endl;
		round++;

	} while (firstChoice->isAlive() && secondChoice->isAlive());

	delete firstChoice;
	delete secondChoice;

	printMenu();
}

int simpleMenu::getInt(const std::string prompt) {
	int integer;
	std::string input;

	bool isValid = true;

	do {
		std::cout << prompt;
		std::getline(std::cin, input);

		// Loop through all characters and determine if they are a digit or not
		// TODO - make a flag for positive or negatives allowed
		for (unsigned i = 0; i < input.length(); i++) {
			if (!isdigit(input[i])) {
				std::cout << "Invalid input" << std::endl;
				isValid = false;
				cin.clear();
				break;
			}

			else {
				isValid = true;
			}
		}
	} while (isValid == false);

	// After scrubbing, cast the input into an integer
	std::stringstream ss(input);

	ss >> integer;

	return integer;
}

int simpleMenu::getAnyInt(const std::string p) {
	int number;
	string input;
	char charTest;

	while (true)
	{
		cout << p;
		getline(cin, input);
		std::stringstream inputStream(input);
		if (!(inputStream >> number)) {
			cout << "Invalud input" << endl;
		}
		else if (inputStream >> charTest) {
			// Check for trailing characters
			cout << "Invalid input" << endl;
		}
		else
		{
			// Input Valid
			return number;
		}
	}
}
