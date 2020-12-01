//
// Created by Cave Submarine on 12/1/20.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() {}
AWeapon::~AWeapon() {
	std::cout << "destructor AWeapon\n";
}
AWeapon::AWeapon(const AWeapon &src) {
	*this = src;
}

AWeapon & AWeapon::operator=(const AWeapon &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_dmg = rhs.getDamage();
		this->_name = rhs.getName();
	}
	return *this;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _actionPoints(apcost), _dmg(damage) {}

const std::string & AWeapon::getName() const { return this->_name; }
int AWeapon::getDamage() const { return this->_dmg; }
int AWeapon::getAPCost() const { return this->_actionPoints; }