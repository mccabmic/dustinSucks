#include <iostream>
#include "Barbarian.hpp"

using namespace std;

int main() {

	Character *pChar;
	Character *pOtherchar;

	pChar = new Barbarian;
	pOtherchar = nullptr;

	cout << "Before attack: otherBarb has: " << pOtherchar->status() << " HP" << endl;

	while (pOtherchar->status() > 0) {
		cout << pChar->attack(*pOtherchar) << endl;
		cout << "After attack: otherBarb has: " << pOtherchar->status() << "HP" << endl;
	}

	delete pChar;
	delete pOtherchar;


	cout << "Hello World!" << endl;
	cin.get();
	return 0;
}