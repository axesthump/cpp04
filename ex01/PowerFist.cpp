//
// Created by Cave Submarine on 12/1/20.
//

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {}
PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator=(const PowerFist &rhs) { return *this; }
PowerFist::PowerFist(const PowerFist &src):AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}