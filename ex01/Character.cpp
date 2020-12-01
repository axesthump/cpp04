//
// Created by Cave Submarine on 12/1/20.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string &name): _name(name), _actionPoints(40), _weapon(0) {}

Character::Character(const Character &character) {
	*this = character;
}

Character & Character::operator=(const Character &character) {
	if (this != &character) {
		this->_name = character.getName();
		this->_weapon = character.getWeapon();
		this->_actionPoints = getAp();
	}
	return *this;
}

Character::~Character() {}

void Character::recoverAP() {
	this->_actionPoints = this->_actionPoints + 10 > 40 ? 40 : this->_actionPoints + 10;
}

void Character::attack(Enemy* enemy) {
	if (this->_weapon && this->_actionPoints > 0) {
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_actionPoints = this->_actionPoints - this->_weapon->getAPCost() <= 0 ? 0 : this->_actionPoints - this->_weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

void Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
}

std::ostream& operator<<(std::ostream& o, Character const& character) {
	if (character.getWeapon())
		o << character.getName() << " has " << character.getAp() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		o << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	return o;
}

AWeapon * Character::getWeapon() const {
	return this->_weapon;
}

const std::string & Character::getName() const {
	return this->_name;
}

int Character::getAp() const {
	return this->_actionPoints;
}