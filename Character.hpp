#ifndef CHRACTER_HPP
#define CHARACTER_HPP

class Character
{
	protected:
		int hp = 20;
		bool isDead = false;
	public:
		// Character();
		// virtual ~Character();

		virtual int attack(Character* target) = 0;
		virtual void defend(int attackDamage) = 0;
		virtual int status() = 0;
};


#endif // !CHRACTER_HPP


