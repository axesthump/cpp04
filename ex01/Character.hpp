//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	AWeapon*	_weapon;
	std::string _name;
	int 		_actionPoints;

	Character();

public:
	Character(std::string const & name);
	Character(Character const& character);
	Character& operator=(Character const& character);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const& getName() const;
	int getAp() const;
	AWeapon* getWeapon() const;
};

std::ostream& operator<<(std::ostream& o, Character const& character);


#endif //EX01_CHARACTER_HPP
